load("@bazel_rules_qt//:qt.bzl", "qt_cc_library")

package(default_visibility = ["//software/gui/robot_diagnostics:__subpackages__"])

qt_cc_library(
    name = "robot_diagnostics_gui",
    src = "robot_diagnostics_gui.cpp",
    hdr = "robot_diagnostics_gui.h",
    deps = [
        ":chicker",
        ":dribbler",
        ":drive",
        ":leds",
        ":robot_selection",
        ":sensor_status",
        "//software/gui/generic_widgets/robot_status",
        "//software/gui/robot_diagnostics/ui:main_widget",
        "//software/multithreading:thread_safe_buffer",
        "//software/proto:sensor_msg_cc_proto",
        "@boost//:bind",
        "@qt//:qt_widgets",
    ],
)

qt_cc_library(
    name = "chicker",
    src = "chicker.cpp",
    hdr = "chicker.h",
    deps = [
        ":slider",
        "//software/gui/robot_diagnostics/ui:main_widget",
        "//software/util/make_enum",
        "@qt//:qt_widgets",
    ],
)

qt_cc_library(
    name = "dribbler",
    src = "dribbler.cpp",
    hdr = "dribbler.h",
    deps = [
        ":slider",
        "//software/gui/robot_diagnostics/ui:main_widget",
        "@qt//:qt_widgets",
    ],
)

qt_cc_library(
    name = "drive",
    src = "drive.cpp",
    hdr = "drive.h",
    deps = [
        ":slider",
        "//software/gui/robot_diagnostics/ui:main_widget",
        "//software/util/make_enum",
        "@qt//:qt_widgets",
    ],
)

qt_cc_library(
    name = "sensor_status",
    src = "sensor_status.cpp",
    hdr = "sensor_status.h",
    deps = [
        ":progress_bar",
        "//software/gui/robot_diagnostics/ui:main_widget",
        "//software/proto:sensor_msg_cc_proto",
        "@qt//:qt_widgets",
    ],
)

qt_cc_library(
    name = "leds",
    src = "leds.cpp",
    hdr = "leds.h",
    deps = [
        "//software/gui/robot_diagnostics/ui:main_widget",
        "@qt//:qt_widgets",
    ],
)

qt_cc_library(
    name = "robot_selection",
    src = "robot_selection.cpp",
    hdr = "robot_selection.h",
    deps = [
        "//shared:constants",
        "//software/gui/robot_diagnostics/ui:main_widget",
        "//software/logger",
        "@qt//:qt_widgets",
    ],
)

qt_cc_library(
    name = "slider",
    src = "slider.cpp",
    hdr = "slider.h",
    deps = [
        "//software/gui/robot_diagnostics/ui:main_widget",
        "@qt//:qt_widgets",
    ],
)

qt_cc_library(
    name = "progress_bar",
    src = "progress_bar.cpp",
    hdr = "progress_bar.h",
    deps = [
        "//software/gui/robot_diagnostics/ui:main_widget",
        "@qt//:qt_widgets",
    ],
)
