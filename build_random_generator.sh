#!/bin/bash -e

prog_name=$(basename "$0")

echo "Using $prog_name to build Random Generator Application"

BUILD_ROOT=$(pwd)

if [ -d "build" ]; then
    echo "Deleting previous output files..."
    rm -rf "build"
fi
sleep 2

echo "Creating /build folder"

mkdir "build"

BUILD_OUTPUT_PATH=build

cd "$BUILD_OUTPUT_PATH"
cmake ..
make 

exit 0