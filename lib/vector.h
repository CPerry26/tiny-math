//
// Created by Cody Perry on 6/13/26.
//

#ifndef TINY_MATH_VECTOR_H
#define TINY_MATH_VECTOR_H

namespace tinymath {
    template <typename T>
    struct Vec2
    {
        T x, y;

        bool operator==(const Vec2& other) const
        {
            return x == other.x && y == other.y;
        }

        Vec2 operator+(const Vec2& other) const
        {
            return Vec2 { x + other.x, y + other.y };
        }

        Vec2 operator-(const Vec2& other) const
        {
            return Vec2 { x - other.x, y - other.y };
        }
    };

    template <typename T>
    struct Vec3
    {
        T x, y, z;

        bool operator==(const Vec3& other) const
        {
            return x == other.x && y == other.y && z == other.z;
        }

        Vec3 operator+(const Vec3& other) const
        {
            return Vec3 { x + other.x, y + other.y, z + other.z };
        }

        Vec3 operator-(const Vec3& other) const
        {
            return Vec3 { x - other.x, y - other.y, z - other.z };
        }
    };

    template <typename T>
    struct Vec4
    {
        T x, y, z, w;

        bool operator==(const Vec4& other) const
        {
            return x == other.x && y == other.y && z == other.z && w == other.w;
        }

        Vec4 operator+(const Vec4& other) const
        {
            return Vec4 { x + other.x, y + other.y, z + other.z, w + other.w };
        }

        Vec4 operator-(const Vec4& other) const
        {
            return Vec4 { x - other.x, y - other.y, z - other.z, w - other.w };
        }
    };
}

#endif //TINY_MATH_VECTOR_H