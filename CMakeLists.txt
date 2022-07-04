cmake_minimum_required(VERSION 3.16)

project("JK-1" C CXX)

include("cmake/prevent_in_source_builds.cmake")
include("cmake/standard_project_setup.cmake")

include("cmake/compiler_features.cmake")
include("cmake/compiler_warnings.cmake")

include("cmake/auto_group_sources.cmake")

include("thirdparty/vst3sdk.cmake")
smtg_enable_vst3_sdk()
add_subdirectory("JK-1")