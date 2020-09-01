package(default_visibility = ["//visibility:public"])

filegroup(
    name = "libs",
    srcs = glob(["usr/lib/gcc/x86_64-pc-linux-gnu/10.2.0/*.a"]),
)

filegroup(
    name = "includes",
    srcs = glob([
        "usr/lib/gcc/x86_64-pc-linux-gnu/10.2.0/include/**",
        "usr/lib/gcc/x86_64-pc-linux-gnu/10.2.0/include",
    ]),
)

filegroup(
    name = "runtime_libs",
    srcs = [
        "usr/lib/libstdc++.so",
    ],
)

filegroup(
    name = "static_libs",
    srcs = [
        "usr/lib/libstdc++.a",
    ],
)
