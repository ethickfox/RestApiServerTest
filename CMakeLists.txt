project(RestAPIService)

cmake_minimum_required(VERSION 2.8.12 FATAL_ERROR)

enable_testing()

if (POLICY CMP0043)
  cmake_policy(SET CMP0043 NEW)
endif()

if(WIN32)
  if(MSVC)
    add_definitions(-D_SCL_SECURE_NO_WARNINGS)
    add_definitions(-D_CRT_SECURE_NO_DEPRECATE)
  endif()
endif()

set(CMAKE_AUTOMOC ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5 COMPONENTS Core Network REQUIRED)
find_package(Cutelyst2Qt5 REQUIRED)

find_package(Qt5Test REQUIRED)


file(GLOB_RECURSE TEMPLATES_SRC root/*)
add_subdirectory(src)


#add_executable(RestAPIService service.cpp)
#add_test(RestAPIService restapiservice)
#target_link_libraries(RestAPIService Qt5::Test)


