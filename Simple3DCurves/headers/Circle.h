#pragma once
#ifndef _CIRCLE_
#define _CIRCLE_

#include "BaseCurve.h"

class Circle : public BaseCurve
{
public:

    double GetRadii();
    void SetRadii(double);

    Vector3 Get3DPoint(double);
    Vector3 GetFirstDerivative(double);

    Circle(double r);
    Circle();
    ~Circle();

private:
    double _radii;
};

#endif // !_CIRCLE_
