#!/bin/bash
wget -P /tmp https://raw.githubusercontent.com/bneayoub/alx-low_level_programming/master/0x18-dynamic_libraries/iwin.so
export LD_PRELOAD=/tmp/iwin.so
