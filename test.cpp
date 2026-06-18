#include "tinymath_vec.h"
#include "tinymath_math.h"

#include <iostream>

int main()
{
    using namespace tinymath;

    Vec2<float> testVec { 1.0f, 2.0f };

    std::cout << magnitude(testVec) << std::endl;
}