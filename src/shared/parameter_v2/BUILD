load(":parameter.bzl", "c_dynamic_parameters", "cpp_dynamic_parameters")

package(default_visibility = ["//visibility:private"])

cpp_dynamic_parameters(
    name = "cpp_params",
    enum_deps = [
        "//software/world:game_state",
    ],
    generated_parameter_file = "cpp_dynamic_parameters.h",
)

c_dynamic_parameters(
    name = "c_params",
    generated_parameter_file = "c_parameters.h",
)
