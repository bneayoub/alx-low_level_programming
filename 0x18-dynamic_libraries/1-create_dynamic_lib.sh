#!/bin/bash
gcc -c *.c
cc -shared -o liball.so *.o