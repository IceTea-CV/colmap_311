#!/bin/sh
cd build
cmake .. -GNinja  -DGUI_ENABLED=OFF -DCUDA_ENABLED=OFF -DTESTS_ENABLED=OFF
ninja
ninja install
