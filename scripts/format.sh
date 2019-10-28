#!/bin/bash

find 2015/ -iname *h -o -iname *.cpp | xargs clang-format -i -style=file
find 2016/ -iname *h -o -iname *.cpp | xargs clang-format -i -style=file
find 2017/ -iname *h -o -iname *.cpp | xargs clang-format -i -style=file
find 2018/ -iname *h -o -iname *.cpp | xargs clang-format -i -style=file
find 2019/ -iname *h -o -iname *.cpp | xargs clang-format -i -style=file
