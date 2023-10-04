#include <iomanip>
#include <iostream>
#include "headers/Circle.h"
#include "headers/Ellipse.h"
#include "headers/Helix.h"

void printVector3(Vector3 v)
{
    std::cout << "( " << std::get<0>(v) << ", " << std::get<1>(v) << ", " << std::get<2>(v) << ")" << std::endl;
}

int main()
{
    Helix a(17.0f, 11.0f);

    std::cout << "3D Curves : \n";
    printVector3(a.Get3DPoint(M_PI_4));
    printVector3(a.GetFirstDerivative(M_PI_4));
}
