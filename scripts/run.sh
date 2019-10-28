#!/bin/bash

mkdir -p bin
cd bin 

cmake -DCMAKE_BUILD_TYPE=Release ..
make

./2018/aoc2k18