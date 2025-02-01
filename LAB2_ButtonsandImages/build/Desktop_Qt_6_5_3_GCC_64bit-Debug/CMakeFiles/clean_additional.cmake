# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/appLAB2_ButtonsandImages_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/appLAB2_ButtonsandImages_autogen.dir/ParseCache.txt"
  "appLAB2_ButtonsandImages_autogen"
  )
endif()
