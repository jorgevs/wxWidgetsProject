cmake_minimum_required(VERSION 3.13)
project(wxWidgetsProject)

set(CMAKE_CXX_STANDARD 17)

set(wxWidgets_ROOT_DIR     D:/sw/CPPCompilersAndLibraries/wxWidgets-3.0.4/)
SET(wxWidgets_LIB_DIR      D:/sw/CPPCompilersAndLibraries/wxWidgets-3.0.4/lib/gcc_dll)
SET(wxWidgets_LIBRARIES    D:/sw/CPPCompilersAndLibraries/wxWidgets-3.0.4/lib/)
SET(wxWidgets_INCLUDE_DIRS D:/sw/CPPCompilersAndLibraries/wxWidgets-3.0.4/include/)

set(wxWidgets_CONFIGURATION mswud)    #use this config for: debug
#set(wxWidgets_CONFIGURATION mswu)     #use this config for: release

set(SOURCE_FILES src/main.cpp src/MyFrame.cpp src/MyFrame.h src/MyApp.cpp src/MyApp.h)
add_executable(wxWidgetsProject ${SOURCE_FILES})

find_package(wxWidgets COMPONENTS core base REQUIRED)
if(wxWidgets_FOUND)
    include(${wxWidgets_USE_FILE})
    target_link_libraries(wxWidgetsProject ${wxWidgets_LIBRARIES})
endif()
