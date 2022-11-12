# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/qtConsoleApp_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/qtConsoleApp_autogen.dir/ParseCache.txt"
  "qtConsoleApp_autogen"
  )
endif()
