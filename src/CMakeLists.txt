set(URBI_ROOT_DIR "/usr" CACHE PATH "Urbi root directory.")

find_package (Urbi REQUIRED)
find_package (Boost REQUIRED thread)
find_package (OpenCV REQUIRED)
find_package (PkgConfig REQUIRED)

pkg_check_modules (PittPatt REQUIRED pittpatt)

include_directories (${PittPatt_INCLUDE_DIRS} ${OpenCV_INCLUDE_DIRS} ${Boost_INCLUDE_DIRS} ${URBI_INCLUDE_DIRS})

if (WIN32)
  add_definitions( -DBOOST_ALL_DYN_LINK )
endif (WIN32)

add_executable (upittpatt upittpatt.cpp PittPattDetector.cpp OpenCVCamera.cpp OpenCVDisplay.cpp)

target_link_libraries (upittpatt ${OpenCV_LIBS} ${PittPatt_LIBRARIES} ${URBI_LIBRARIES} ${Boost_LIBRARIES})
