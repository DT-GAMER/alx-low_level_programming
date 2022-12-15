#!/bin/bash
gcc -c -fPIC *.o
gcc -shared -o liball.so *.o
