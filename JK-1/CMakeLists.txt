set(target_name JK_1)

smtg_add_vst3plugin(${target_name}
    source/version.h
    source/jk1cids.h
    source/jk1processor.h
    source/jk1processor.cpp
    source/jk1controller.h
    source/jk1controller.cpp
    source/jk1entry.cpp
)

target_include_directories(${target_name} PRIVATE ${CMAKE_CURRENT_BINARY_DIR})

# - VSTGUI Wanted ----
if(SMTG_ADD_VSTGUI)
    target_sources(${target_name}
        PRIVATE
        resource/jk1editor.uidesc
    )
    target_link_libraries(${target_name}
        PRIVATE
        vstgui_support
    )
    smtg_target_add_plugin_resources(${target_name}
        RESOURCES
        "resource/jk1editor.uidesc"
    )
endif(SMTG_ADD_VSTGUI)

# -------------------
smtg_target_add_plugin_snapshots(${target_name}
    RESOURCES
    resource/359EA1C4BC6B5FEC9567A516EA4FF64A_snapshot.png
    resource/359EA1C4BC6B5FEC9567A516EA4FF64A_snapshot_2.0x.png
)

target_link_libraries(${target_name}
    PRIVATE
    sdk
)

smtg_target_configure_version_file(${target_name})

target_sources(${target_name} PRIVATE
    resource/win32resource.rc
)

if(MSVC)
    set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${target_name})

    smtg_target_set_debug_executable(${target_name}
        "$(ProgramW6432)/Steinberg/VST3PluginTestHost/VST3PluginTestHost.exe"
        "--pluginfolder \"$(OutDir)/\""
    )
endif()
