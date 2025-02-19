# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/appcapslockcontrol_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/appcapslockcontrol_autogen.dir/ParseCache.txt"
  "appcapslockcontrol_autogen"
  )
endif()
