cmake_minimum_required (VERSION 3.14)

include("${ENGINE_CMAKE_DIRECTORY}/MakePlugin.cmake")
include("${ENGINE_CMAKE_DIRECTORY}/LinkPlugin.cmake")

MakePlugin(607962e6-7515-4bfb-86d7-07c470eaea4b ${CMAKE_CURRENT_LIST_DIR} "AppCore" "lib" "bin" "../Plugin.nplugin")