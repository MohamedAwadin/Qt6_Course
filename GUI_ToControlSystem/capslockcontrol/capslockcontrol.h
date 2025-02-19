#ifndef CAPSLOCKCONTROL_H
#define CAPSLOCKCONTROL_H

#include <QObject>
#include <QTimer>

class CapsLockControl : public QObject {
    Q_OBJECT
    Q_PROPERTY(QString iconSource READ getIconSource NOTIFY statusChanged)
    Q_PROPERTY(QString imageSource READ getImageSource NOTIFY statusChanged)
    Q_PROPERTY(int brightness READ getBrightness WRITE setBrightness NOTIFY brightnessChanged)
    Q_PROPERTY(QString cpuTemperature READ getCpuTemperature NOTIFY cpuTemperatureChanged)
    Q_PROPERTY(QString batteryLevel READ getBatteryLevel NOTIFY batteryLevelChanged)

public:
    explicit CapsLockControl(QObject *parent = nullptr);

    Q_INVOKABLE void toggleCapsLock();
    Q_INVOKABLE void setBrightness(int value);

    QString getIconSource();
    QString getImageSource();
    int getBrightness();
    QString getCpuTemperature();
    QString getBatteryLevel();

signals:
    void statusChanged();
    void brightnessChanged();
    void cpuTemperatureChanged();
    void batteryLevelChanged();

private slots:
    void updateCapsLockStatus();
    void updateBrightness();
    void updateCpuTemperature();
    void updateBatteryLevel();

private:
    QString capsLockPath = "/sys/class/leds/input4::capslock/brightness";
    QString backlightPath = "/sys/class/leds/dell::kbd_backlight/brightness";
    QString cpuTempPath = "/sys/class/thermal/thermal_zone0/temp";
    QString batteryPath = "/sys/class/power_supply/BAT0/capacity";

    QString currentIcon;
    QString currentImage;
    int brightnessLevel;
    QTimer *statusUpdateTimer;
};

#endif // CAPSLOCKCONTROL_H
