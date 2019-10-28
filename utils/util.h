#pragma once

#include <cstdint>

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