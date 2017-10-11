# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 08:12:16 d3g096
# -------------------------------------------------------------


set(lokisrc
  LevelMutex.cpp
  OrderedStatic.cpp
  SafeFormat.cpp
  Singleton.cpp
  SmallObj.cpp
  SmartAssert.cpp
  SmartPtr.cpp
  StrongPtr.cpp
  )

add_library(loki ${lokisrc})

