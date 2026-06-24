#include "tinymath_vec.h"
#include "tinymath_vec_math.h"

#include "tinymath_mat.h"
#include "tinymath_mat_math.h"

#include <iostream>

int main()
{
    using namespace tinymath::vector;

    Vec2<float> testVec { 1.0f, 2.0f };

    std::cout << tinymath::vector::math::magnitude(testVec) << std::endl;

    const tinymath::matrix::matrix2d<float, 2, 2> mat2d {};
    tinymath::matrix::matrix2d<float, 2, 2> mat2d1 {};

    mat2d1(0, 0) = 1.0f;
    mat2d1(0, 1) = 1.0f;
    mat2d1(1, 0) = 1.0f;
    mat2d1(1, 1) = 1.0f;

    const tinymath::matrix::matrix2d<float, 2, 2> result = tinymath::matrix::math::add(mat2d, mat2d1);
    std::cout << result(0, 0) << std::endl;
    std::cout << result(0, 1) << std::endl;
    std::cout << result(1, 0) << std::endl;
    std::cout << result(1, 1) << std::endl;
}