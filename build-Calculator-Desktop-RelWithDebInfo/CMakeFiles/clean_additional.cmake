# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "RelWithDebInfo")
  file(REMOVE_RECURSE
  "CMakeFiles\\Calculator_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Calculator_autogen.dir\\ParseCache.txt"
  "Calculator_autogen"
  )
endif()
