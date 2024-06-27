cmake_minimum_required(VERSION 3.16)

project(thermostat VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.4 REQUIRED COMPONENTS Quick)

qt_standard_project_setup()

qt_add_executable(appthermostat
    main.cpp
)

qt_add_qml_module(appthermostat
    URI thermostat
    VERSION 1.0
    QML_FILES
        Main.qml
        QML_FILES UI/HomeScreen/HomeScreen.qml
        QML_FILES UI/HomeScreen/TemperatureControlSlider.qml
        SOURCES Contollers/systemcontroller.h Contollers/systemcontroller.cpp
        RESOURCES UI/Assets/auto.png UI/Assets/calendar.png UI/Assets/fire.png UI/Assets/info.png UI/Assets/internet.png UI/Assets/settings.png UI/Assets/snow.png UI/Assets/thermometer.png
        QML_FILES UI/HomeScreen/HeatSelectDialog.qml
        QML_FILES UI/SettingsScreen/SettingsScreen.qml
        RESOURCES UI/Assets/arrow.png
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appthermostat PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appthermostat
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appthermostat
    PRIVATE Qt6::Quick
)

include(GNUInstallDirs)
install(TARGETS appthermostat
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
