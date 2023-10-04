#include <iomanip>
#include <iostream>
#include "headers/Circle.h"
#include "headers/Ellipse.h"
#include "headers/Helix.h"
#define _USE_MATH_DEFINES
#include <math.h>

void printVector3(Vector3 v)
{
    std::cout << "( " << std::get<0>(v) << ", " << std::get<1>(v) << ", " << std::get<2>(v) << ")" << std::endl;
}

int main()
{
    Ellipse a(13.0f, 25.0f);

    std::cout << "3D Curves : \n";
    printVector3(a.Get3DPoint(M_PI_4));
    printVector3(a.GetFirstDerivative(M_PI_4));
}
