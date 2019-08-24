#!/bin/bash

if [ "$1" = "release" ]
then
    ./bin/release/aoc16 
else
    ./bin/debug/aoc16 
fi