#!/bin/bash

mkdir -p bin
cd bin 

cmake -DCMAKE_BUILD_TYPE=Release ..
make