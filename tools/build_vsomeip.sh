#!/bin/bash -e

BUILD_ROOT=/IPR/tools

echo $BUILD_ROOT
cd $BUILD_ROOT/vsomeip

cmake -Bbuild -DCMAKE_INSTALL_PREFIX=../install_folder -DENABLE_SIGNAL_HANDLING=1 .
cmake --build build --target install