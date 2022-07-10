cmake_minimum_required(VERSION 3.16)

project("JK-1"
  LANGUAGES C CXX
  VERSION 1.0.0.0
  DESCRIPTION "JK-1 VST 3 Plug-in")

include("cmake/prevent_in_source_builds.cmake")
include("cmake/standard_project_setup.cmake")

include("cmake/compiler_features.cmake")
include("cmake/compiler_warnings.cmake")

include("thirdparty/vst3sdk.cmake")
add_subdirectory("JK-1")