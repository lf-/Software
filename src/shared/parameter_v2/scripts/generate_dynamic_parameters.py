import yaml
import os
from pathlib import Path
import argparse
from config_yaml_loader import (
    ConfigYamlLoader,
    ConfigYamlException,
    ConfigYamlCycleDetected,
    ConfigYamlMalformed,
)

# Path relative to the bazel WORKSPACE root
# This path is included in the data for the py_binary bazel target
PARAMETER_CONFIG_PATH = Path(os.path.dirname(__file__), "../config")


def generate_dynamic_parameters(output_file, include_headers, generate_for_cpp):
    # A temporary implementation used to show we can access the YAML files
    yamls = list(PARAMETER_CONFIG_PATH.glob("**/*.yaml"))

    ConfigYamlLoader.get_config_metadata(yamls)

    with open(output_file, "w") as outfile:
        outfile.write("Hello world\n")


def main():
    parser = argparse.ArgumentParser(description="Generate DynamicParameters")
    parser.add_argument(
        "-o",
        "--output_file",
        type=str,
        required=True,
        help="The file that will be generated",
    )
    output_type = parser.add_mutually_exclusive_group(required=True)
    output_type.add_argument(
        "-c",
        dest="generate_for_cpp",
        action="store_false",
        help="Generate code that is compatible with C",
    )
    output_type.add_argument(
        "-cpp",
        dest="generate_for_cpp",
        action="store_true",
        help="Generate code that is compatible with C++ (not compatible with C)",
    )
    parser.add_argument(
        "--include_headers",
        nargs="+",
        required=False,
        help="Filepaths (relative to the bazel WORKSPACE) for any header "
        "files that should be included at the top of the generated code",
    )

    args = parser.parse_args()
    generate_dynamic_parameters(
        args.output_file, args.include_headers, args.generate_for_cpp
    )


#######################################################################
#                                Main                                 #
#######################################################################

if __name__ == "__main__":
    main()
