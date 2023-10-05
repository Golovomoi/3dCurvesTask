#include "../headers/BaseCurve.h"

BaseCurve::BaseCurve()
{
    _center = { 0, 0, 0 };
    _type = 0;
    _curveTypeName = " base";
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

int BaseCurve::GetType()
{
    return _type;
}

std::string BaseCurve::GetTypeName()
{
    return _curveTypeName;
}
