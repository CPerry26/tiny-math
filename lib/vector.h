//
// Created by Cody Perry on 6/13/26.
//

#ifndef TINY_MATH_VECTOR_H
#define TINY_MATH_VECTOR_H

#include <cmath>

namespace tinymath
{
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

        T magnitude() const
        {
            return std::sqrt(std::pow(x, 2) + std::pow(y, 2));
        }

        T dot(const Vec2& vec) const
        {
            return (x * vec.x) + (y * vec.y);
        }

        void scalarMultiplication(T scalar)
        {
            x *= scalar;
            y *= scalar;
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

        T magnitude() const
        {
            return std::sqrt(std::pow(x, 2) + std::pow(y, 2) + std::pow(z, 2));
        }

        T dot(const Vec3& vec) const
        {
            return (x * vec.x) + (y * vec.y) + (z * vec.z);
        }

        Vec3 cross(const Vec3& vec) const
        {
            T newX = ((y * vec.z) - (z * vec.y));
            T newY = ((z * vec.x) - (x * vec.z));
            T newZ = ((x * vec.y) - (y * vec.x));
            return Vec3 { newX, newY, newZ };
        }

        void scalarMultiplication(T scalar)
        {
            x *= scalar;
            y *= scalar;
            z *= scalar;
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

        T magnitude() const
        {
            return std::sqrt(std::pow(x, 2) + std::pow(y, 2) + std::pow(z, 2) + std::pow(w, 2));
        }

        T dot(const Vec4& vec) const
        {
            return (x * vec.x) + (y * vec.y) + (z * vec.z) + (w * vec.w);
        }

        void scalarMultiplication(T scalar)
        {
            x *= scalar;
            y *= scalar;
            z *= scalar;
            w *= scalar;
        }
    };
}

#endif