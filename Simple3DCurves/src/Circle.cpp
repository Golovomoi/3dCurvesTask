#include "../headers/Circle.h"

double Circle::GetRadii()
{
    return _radii;
}

void Circle::SetRadii(double r)
{
    _radii = r;
}

std::tuple<double, double, double> Circle::Get3DPoint(double t)
{
    double x = std::get<0>(_center) + _radii * cos(t);
    double y = std::get<1>(_center) + _radii * sin(t);
    double z = 0;
    return { x, y, z };
}

Vector3 Circle::GetFirstDerivative(double t)
{
    double dXdT = - _radii * sin(t);
    double dYdT = - _radii * cos (t);
    double dZdT = 0;
    return { dXdT, dYdT, dZdT };
}

Circle::Circle()
{
    _radii = 0;
    _type = 1;
    _curveTypeName = "Circle";
}

Circle::Circle(double r) : Circle()
{
    _radii = r;
}

Circle::~Circle()
{
}
