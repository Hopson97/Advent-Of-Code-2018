#pragma once

#include <cmath>
#include <cstdint>
#include <unordered_set>

namespace aoc::maths
{
    template<typename T>
    struct Vector2
    {
        T x = 0;
        T y = 0;
    };

    template<typename T>
    bool operator==(const Vector2<T> left, const Vector2<T> right)
    {
        return left.x == right.x && left.y == right.y;
    }

    template<typename T>    
    struct Vector2Hash {
        std::size_t operator()(const Vector2<T>& k) const
        {
            return (k.x << (sizeof(T) * 8)) | k.y;
        }
    };

    using Point = Vector2<int>;

    template<typename T>
    using VectorSet = std::unordered_set<Vector2<T>, Vector2Hash<T>>;

} // namespace aoc::maths