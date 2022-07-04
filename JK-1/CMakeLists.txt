set(target_name "JK-1")

smtg_add_vst3plugin(${target_name}
    source/version.h
    source/myplugincids.h
    source/mypluginprocessor.h
    source/mypluginprocessor.cpp
    source/myplugincontroller.h
    source/myplugincontroller.cpp
    source/mypluginentry.cpp
)

# - VSTGUI Wanted ----
if(SMTG_ADD_VSTGUI)
    target_sources(${target_name}
        PRIVATE
        resource/myplugineditor.uidesc
    )
    target_link_libraries(${target_name}
        PRIVATE
        vstgui_support
    )
    smtg_target_add_plugin_resources(${target_name}
        RESOURCES
        "resource/myplugineditor.uidesc"
    )
endif(SMTG_ADD_VSTGUI)

# -------------------
smtg_target_add_plugin_snapshots(${target_name}
    RESOURCES
    resource/11DCA11F895A5EF4B0EDDB6B1E77E10A_snapshot.png
    resource/11DCA11F895A5EF4B0EDDB6B1E77E10A_snapshot_2.0x.png
)

target_link_libraries(${target_name}
    PRIVATE
    sdk
)

smtg_target_configure_version_file(${target_name})

if(SMTG_MAC)
    set(CMAKE_OSX_DEPLOYMENT_TARGET 10.12)
    smtg_target_set_bundle(${target_name}
        BUNDLE_IDENTIFIER com.jk.jk1
        COMPANY_NAME "My Plug-in Company"
    )
    smtg_target_set_debug_executable(${target_name}
        "/Applications/VST3PluginTestHost.app"
        "--pluginfolder;$(BUILT_PRODUCTS_DIR)"
    )
elseif(SMTG_WIN)
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
endif(SMTG_MAC)
