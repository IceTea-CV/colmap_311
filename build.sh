#!/bin/sh
mkdir build
cd build
cmake .. -GNinja
ninja
ninja install
