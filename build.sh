#!/bin/sh
cd build
cmake .. -GNinja
ninja
ninja install
