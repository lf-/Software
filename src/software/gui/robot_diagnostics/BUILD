package(default_visibility = ["//visibility:public"])

cc_library(
    name = "threaded_robot_diagnostics_gui",
    srcs = ["threaded_robot_diagnostics_gui.cpp"],
    hdrs = ["threaded_robot_diagnostics_gui.h"],
    deps = [
        "//software/gui/robot_diagnostics/widgets:robot_diagnostics_gui",
        "//software/multithreading:thread_safe_buffer",
        "//software/multithreading:threaded_observer",
        "//software/proto:sensor_msg_cc_proto",
        "//software/world",
        "@qt//:qt_widgets",
    ],
)

cc_binary(
    name = "robot_diagnostics_main",
    srcs = ["robot_diagnostics_main.cpp"],
    deps = [
        ":threaded_robot_diagnostics_gui",
        "//software/logger",
        "@boost//:program_options",
    ],
)
