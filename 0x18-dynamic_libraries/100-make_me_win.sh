#!/bin/bash
wget -p /tmp/ https://raw.github.com/DT-GAMER/alx-low_level_programming/masters/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
