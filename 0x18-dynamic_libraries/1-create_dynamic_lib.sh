#!/bin/bash

# Generate object file s
gcc -c -fPIC *.c

# Consolidate all object files into single lib file
gcc -shared -o liball.so *.o
