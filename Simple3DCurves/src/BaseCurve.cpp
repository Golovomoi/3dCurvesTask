#include "../headers/BaseCurve.h"

BaseCurve::BaseCurve()
{
    _center = { 0, 0, 0 };
}

BaseCurve::~BaseCurve()
{
}

void BaseCurve::SetCenter(double x, double y, double z)
{
    _center = {x, y, z};
}

Vector3 BaseCurve::GetCenter()
{
    return _center;
}
