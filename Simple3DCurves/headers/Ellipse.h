#pragma once
#ifndef _ELLIPSE_
#define _ELLIPSE_

#include "BaseCurve.h"

class Ellipse : public BaseCurve
{
public:

    double GetRadiiX();
    void SetRadiiX(double);

    double GetRadiiY();
    void SetRadiiY(double);

    Vector3 Get3DPoint(double);
    Vector3 GetFirstDerivative(double);

    Ellipse();
    Ellipse(double, double);
    ~Ellipse();

private:
    double _radiiX;
    double _radiiY;
};

#endif // !_ELLIPSE_