#include "../headers/Helix.h"

void Helix::SetRadii(double r)
{
    _radii = r;
}

double Helix::GetRadi()
{
    return _radii;
}

void Helix::SetStep(double s)
{
    _step = s;
}

double Helix::GetStep()
{
    return _step;
}

Vector3 Helix::Get3DPoint(double t)
{
    double x = std::get<0>(_center) + _radii * cos(t);
    double y = std::get<1>(_center) + _radii * sin(t);
    double z = std::get<2>(_center) + _step * t / (2 * M_PI);
    return {x, y, z};
}

Vector3 Helix::GetFirstDerivative(double t)
{
    double dXdT = -_radii * sin(t);
    double dYdT = _radii * cos(t);
    double dZdT = _step / (2 * M_PI);
    return { dXdT, dYdT, dZdT };
}

Helix::Helix(double r, double s)
{
    _radii = r;
    _step = s;
}

Helix::Helix()
{
    _radii = 0;
    _step = 0;
}

Helix::~Helix()
{
}
