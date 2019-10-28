#pragma once

#include <cstdint>
#include <cmath>
#include <cstring>
#include <fstream>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <array>
#include <algorithm>
#include <unordered_set>
#include <set>
#include <list>

using u8 = std::uint8_t;
using u16 = std::uint16_t;

template<typename T>
u8 toU8(T t) {
    return static_cast<u8>(t);
}

template<typename T>
u16 toU16(T t) {
    return static_cast<u16>(t);
}