# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/apprectangle_helloworld_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/apprectangle_helloworld_autogen.dir/ParseCache.txt"
  "apprectangle_helloworld_autogen"
  )
endif()
