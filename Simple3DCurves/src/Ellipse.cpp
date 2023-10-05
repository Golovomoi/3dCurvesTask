#include "../headers/Ellipse.h"

double Ellipse::GetRadiiX()
{
    return _radiiX;
}

void Ellipse::SetRadiiX(double r)
{
    _radiiX = r;
}

double Ellipse::GetRadiiY()
{
    return _radiiY;
}

void Ellipse::SetRadiiY(double r)
{
    _radiiY = r;
}

Vector3 Ellipse::Get3DPoint(double t)
{
    double x = std::get<0>(_center) + _radiiX * cos(t);
    double y = std::get<1>(_center) + _radiiY * sin(t);
    double z = 0;
    return {x, y, z};
}

Vector3 Ellipse::GetFirstDerivative(double t)
{
    double dXdT = -_radiiX * sin(t);
    double dYdT = _radiiY * cos(t);
    double dZdT = 0;
    return { dXdT, dYdT, dZdT };
}

Ellipse::Ellipse()
{
    _radiiX = 0;
    _radiiY = 0;
    _type = 2;
    _curveTypeName = "Elipse";
}

Ellipse::Ellipse(double rX, double rY) : Ellipse()
{
    _radiiX = rX;
    _radiiY = rY;
}

Ellipse::~Ellipse()
{
}
