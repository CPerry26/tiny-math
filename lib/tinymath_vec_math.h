//
// Created by Cody Perry on 6/16/26.
//

#ifndef TINY_MATH_MATH_H
#define TINY_MATH_MATH_H

#include "tinymath_vec.h"

namespace tinymath::vector::math
{
    //
    // Equals
    //
    template <typename T>
    inline bool equals(const Vec2<T>& first, const Vec2<T>& second)
    {
        return first.x == second.x && first.y == second.y;
    }

    template <typename T>
    inline bool equals(const Vec3<T>& first, const Vec3<T>& second)
    {
        return first.x == second.x && first.y == second.y && first.z == second.z;
    }

    template <typename T>
    inline bool equals(const Vec4<T>& first, const Vec4<T>& second)
    {
        return first.x == second.x && first.y == second.y && first.z == second.z && first.w == second.w;
    }

    //
    // Addition
    //
    template <typename T>
    inline Vec2<T> add(const Vec2<T>& first, const Vec2<T>& second)
    {
        return Vec2<T> { first.x + second.x, first.y + second.y };
    }

    template <typename T>
    inline Vec3<T> add(const Vec3<T>& first, const Vec3<T>& second)
    {
        return Vec3<T> { first.x + second.x, first.y + second.y, first.z + second.z };
    }

    template <typename T>
    inline Vec4<T> add(const Vec4<T>& first, const Vec4<T>& second)
    {
        return Vec4<T> { first.x + second.x, first.y + second.y, first.z + second.z, first.w + second.w };
    }

    //
    // Subtraction
    //
    template <typename T>
    inline Vec2<T> subtract(const Vec2<T>& first, const Vec2<T>& second)
    {
        return Vec2<T> { first.x - second.x, first.y - second.y };
    }

    template <typename T>
    inline Vec3<T> subtract(const Vec3<T>& first, const Vec3<T>& second)
    {
        return Vec3<T> { first.x - second.x, first.y - second.y, first.z - second.z };
    }

    template <typename T>
    inline Vec4<T> subtract(const Vec4<T>& first, const Vec4<T>& second)
    {
        return Vec4<T> { first.x - second.x, first.y - second.y, first.z - second.z, first.w - second.w };
    }

    //
    // Magnitude
    //
    template<typename T>
    inline T magnitude(const Vec2<T>& vector)
    {
        return std::sqrt(std::pow(vector.x, 2) + std::pow(vector.y, 2));
    }

    template<typename T>
    inline T magnitude(const Vec3<T>& vector)
    {
        return std::sqrt(std::pow(vector.x, 2) + std::pow(vector.y, 2) + std::pow(vector.z, 2));
    }

    template<typename T>
    inline T magnitude(const Vec4<T>& vector)
    {
        return std::sqrt(std::pow(vector.x, 2) + std::pow(vector.y, 2) + std::pow(vector.z, 2) + std::pow(vector.w, 2));
    }

    //
    // Dot product
    //
    template <typename T>
    inline T dot(const Vec2<T>& first, const Vec2<T>& second)
    {
        return (first.x * second.x) + (first.y * second.y);
    }

    template <typename T>
    inline T dot(const Vec3<T>& first, const Vec3<T>& second)
    {
        return (first.x * second.x) + (first.y * second.y) + (first.z * second.z);
    }

    template <typename T>
    inline T dot(const Vec4<T>& first, const Vec4<T>& second)
    {
        return (first.x * second.x) + (first.y * second.y) + (first.z, second.z) + (first.w * second.w);
    }

    //
    // Scalar multiplication
    //
    template <typename T>
    inline Vec2<T> scalarMultiplication(T scalar, const Vec2<T>& vector)
    {
        return Vec2<T> { vector.x * scalar, vector.y * scalar };
    }

    template <typename T>
    inline Vec3<T> scalarMultiplication(T scalar, const Vec3<T>& vector)
    {
        return Vec3<T> { vector.x * scalar, vector.y * scalar, vector.z * scalar };
    }

    template <typename T>
    inline Vec4<T> scalarMultiplication(T scalar, const Vec4<T>& vector)
    {
        return Vec4<T> { vector.x * scalar, vector.y * scalar, vector.z * scalar, vector.w * scalar };
    }

    //
    // Scalar division
    //
    template <typename T>
    inline Vec2<T> scalarDivision(T scalar, const Vec2<T>& vector)
    {
        return Vec2<T> { vector.x / scalar, vector.y / scalar };
    }

    template <typename T>
    inline Vec3<T> scalarDivision(T scalar, const Vec3<T>& vector)
    {
        return Vec3<T> { vector.x / scalar, vector.y / scalar, vector.z / scalar };
    }

    template <typename T>
    inline Vec4<T> scalarDivision(T scalar, const Vec4<T>& vector)
    {
        return Vec4<T> { vector.x / scalar, vector.y / scalar, vector.z / scalar, vector.w / scalar };
    }

    //
    // Normalize
    //
    template <typename T>
    inline Vec2<T> normalize(const Vec2<T>& vector)
    {
        T magnitude = magnitude(vector);
        return Vec2<T> { vector.x / magnitude, vector.y / magnitude };
    }

    template <typename T>
    inline Vec3<T> normalize(const Vec3<T>& vector)
    {
        T magnitude = magnitude(vector);
        return Vec3<T> { vector.x / magnitude, vector.y / magnitude, vector.z / magnitude };
    }

    template <typename T>
    inline Vec4<T> normalize(const Vec4<T>& vector)
    {
        T magnitude = magnitude(vector);
        return Vec4<T> { vector.x / magnitude, vector.y / magnitude, vector.z / magnitude, vector.w / magnitude };
    }

    //
    // Cross product (3D only)
    //
    template <typename T>
    inline Vec3<T> crossProduct(const Vec3<T>& first, const Vec3<T>& second)
    {
        T newX = ((first.y * second.z) - (first.z * second.y));
        T newY = ((first.z * second.x) - (first.x * second.z));
        T newZ = ((first.x * second.y) - (first.y * second.x));

        return Vec3<T> { newX, newY, newZ };
    }

}

#endif