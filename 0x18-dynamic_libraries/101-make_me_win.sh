#!/bin/bash
wget -P /tmp https://github.com/bneayoub/alx-low_level_programming/raw/main/0x18-dynamic_libraries/winning.so
export LD_PRELOAD=/tmp/iwin.so
