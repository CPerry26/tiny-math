//
// Created by Cody Perry on 6/18/26.
//

#ifndef TINY_MATH_TINYMATH_MAT_H
#define TINY_MATH_TINYMATH_MAT_H

#include <array>

namespace tinymath::matrix
{
    template <typename T, std::size_t Rows, std::size_t Cols>
    struct matrix2d {
        std::array<T, Rows * Cols> m_arr {};

        constexpr T& operator()(std::size_t row, std::size_t col)
        {
            return m_arr[row * Cols + col];
        }

        constexpr const T& operator()(std::size_t row, std::size_t col) const
        {
            return m_arr[row * Cols + col];
        }
    };

    template <typename T, std::size_t Rows, std::size_t Cols, std::size_t Depth>
    struct matrix3d {
        std::array<T, Rows * Cols * Depth> m_arr {};

        constexpr T& operator()(std::size_t row, std::size_t col, std::size_t depth)
        {
            return m_arr[(row * Cols + col) * Depth + depth];
        }

        constexpr const T& operator()(std::size_t row, std::size_t col, std::size_t depth) const
        {
            return m_arr[(row * Cols + col) * Depth + depth];
        }
    };
}

#endif //TINY_MATH_TINYMATH_MAT_H