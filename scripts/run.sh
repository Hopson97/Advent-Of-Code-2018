#!/bin/bash

mkdir -p bin
cd bin 

cmake -DCMAKE_BUILD_TYPE=Release ..
make

./advent-of-code $1 $2