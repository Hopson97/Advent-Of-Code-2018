#!/bin/bash

find 2018/ -iname *h -o -iname *.cpp | xargs clang-format -i -style=file

