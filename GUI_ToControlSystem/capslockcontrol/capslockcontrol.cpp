#include "capslockcontrol.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>

CapsLockControl::CapsLockControl(QObject *parent) : QObject(parent), brightnessLevel(0) {
    statusUpdateTimer = new QTimer(this);
    connect(statusUpdateTimer, &QTimer::timeout, this, &CapsLockControl::updateCapsLockStatus);
    connect(statusUpdateTimer, &QTimer::timeout, this, &CapsLockControl::updateBrightness);
    connect(statusUpdateTimer, &QTimer::timeout, this, &CapsLockControl::updateCpuTemperature);
    connect(statusUpdateTimer, &QTimer::timeout, this, &CapsLockControl::updateBatteryLevel);
    statusUpdateTimer->start(1000);  // Update every second

    updateCapsLockStatus();
    updateBrightness();
    updateCpuTemperature();
    updateBatteryLevel();
}

void CapsLockControl::toggleCapsLock() {
    QFile file(capsLockPath);
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        qWarning() << "Error: Unable to open Caps Lock LED file.";
        return;
    }

    QTextStream stream(&file);
    QString state = stream.readLine().trimmed();
    file.seek(0);
    stream << (state == "0" ? "1" : "0");
    file.close();

    QTimer::singleShot(100, this, &CapsLockControl::updateCapsLockStatus);
}

void CapsLockControl::updateCapsLockStatus() {
    QFile file(capsLockPath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qWarning() << "Error: Unable to read Caps Lock LED file.";
        return;
    }

    QTextStream stream(&file);
    QString state = stream.readLine().trimmed();
    file.close();

    QString newIcon = (state == "1") ? "led_on.png" : "led_off.png";
    if (newIcon != currentIcon) {
        currentIcon = newIcon;
        emit statusChanged();
    }

    QString newImage = (state == "1") ? "control_bg_on.png" : "control_bg_off.png";
    if (newImage != currentImage) {
        currentImage = newImage;
        emit statusChanged();
    }
}

QString CapsLockControl::getIconSource() {
    return currentIcon;
}

QString CapsLockControl::getImageSource() {
    return currentImage;
}

void CapsLockControl::setBrightness(int value) {
    if (value < 0) value = 0;
    if (value > 2) value = 2;

    QFile file(backlightPath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qWarning() << "Error: Unable to set keyboard brightness.";
        return;
    }

    QTextStream stream(&file);
    stream << value;
    file.close();

    brightnessLevel = value;
    emit brightnessChanged();
}

int CapsLockControl::getBrightness() {
    QFile file(backlightPath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qWarning() << "Error: Unable to read keyboard brightness.";
        return brightnessLevel;
    }

    QTextStream stream(&file);
    brightnessLevel = stream.readLine().trimmed().toInt();
    file.close();

    return brightnessLevel;
}

void CapsLockControl::updateBrightness() {
    brightnessLevel = getBrightness();
    emit brightnessChanged();
}

QString CapsLockControl::getCpuTemperature() {
    QFile file(cpuTempPath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qWarning() << "Error: Unable to read CPU temperature.";
        return "N/A";
    }

    QTextStream stream(&file);
    int temp = stream.readLine().trimmed().toInt();
    file.close();

    return QString::number(temp / 1000.0, 'f', 1) + "°C";  // Convert to Celsius
}

void CapsLockControl::updateCpuTemperature() {
    emit cpuTemperatureChanged();
}

QString CapsLockControl::getBatteryLevel() {
    QFile file(batteryPath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qWarning() << "Error: Unable to read battery level.";
        return "N/A";
    }

    QTextStream stream(&file);
    QString level = stream.readLine().trimmed();
    file.close();

    return level + "%";
}

void CapsLockControl::updateBatteryLevel() {
    emit batteryLevelChanged();
}
