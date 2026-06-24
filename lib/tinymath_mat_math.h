//
// Created by Cody Perry on 6/24/26.
//

#ifndef TINY_MATH_TINYMATH_MAT_MATH_H
#define TINY_MATH_TINYMATH_MAT_MATH_H

#include "tinymath_mat.h"

namespace tinymath::matrix::math
{
    //
    // Addition
    //
    template <typename T, std::size_t Rows, std::size_t Cols>
    inline matrix2d<T, Rows, Cols> add(const matrix2d<T, Rows, Cols>& first, const matrix2d<T, Rows, Cols>& second)
    {
        matrix2d<T, Rows, Cols> newMat {};

        for (std::size_t row = 0; row < Rows; ++row)
        {
            for (std::size_t col = 0; col < Cols; ++col)
            {
                newMat(row, col) = first(row, col) + second(row, col);
            }
        }

        return newMat;
    }

    template <typename T, std::size_t Rows, std::size_t Cols, std::size_t Depth>
    inline matrix3d<T, Rows, Cols, Depth> add(const matrix3d<T, Rows, Cols, Depth>& first, const matrix3d<T, Rows, Cols, Depth>& second)
    {
        matrix3d<T, Rows, Cols, Depth> newMat {};

        for (std::size_t row = 0; row < Rows; ++row)
        {
            for (std::size_t col = 0; col < Cols; ++col)
            {
                for (std::size_t depth = 0; depth < Depth; ++depth)
                {
                    newMat(row, col, depth) = first(row, col, depth) + second(row, col, depth);
                }
            }
        }

        return newMat;
    }

    //
    // Multiplication
    //
    template <typename T, std::size_t Rows, std::size_t Cols>
    inline matrix2d<T, Rows, Cols> multiply(const matrix2d<T, Rows, Cols>& first, const matrix2d<T, Rows, Cols>& second)
    {
        matrix2d<T, Rows, Cols> newMat {};

        for (std::size_t row = 0; row < Rows; ++row)
        {
            for (std::size_t col = 0; col < Cols; ++col)
            {
                newMat(row, col) = first(row, col) * second(row, col);
            }
        }

        return newMat;
    }

    template <typename T, std::size_t Rows, std::size_t Cols, std::size_t Depth>
    inline matrix3d<T, Rows, Cols, Depth> multiply(const matrix3d<T, Rows, Cols, Depth>& first, const matrix3d<T, Rows, Cols, Depth>& second)
    {
        matrix3d<T, Rows, Cols, Depth> newMat {};

        for (std::size_t row = 0; row < Rows; ++row)
        {
            for (std::size_t col = 0; col < Cols; ++col)
            {
                for (std::size_t depth = 0; depth < Depth; ++depth)
                {
                    newMat(row, col, depth) = first(row, col, depth) * second(row, col, depth);
                }
            }
        }

        return newMat;
    }
}

#endif //TINY_MATH_TINYMATH_MAT_MATH_H