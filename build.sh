#!/bin/bash

git submodule update --recuresive --init

mkdir -p build
cd build
cmake ..
make -j
