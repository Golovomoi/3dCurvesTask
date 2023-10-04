#pragma once
#ifndef _HELIX_
#define _HELIX_

#include "BaseCurve.h"

class Helix : public BaseCurve
{
public:
    void SetRadii(double);
    double GetRadi();

    void SetStep(double);
    double GetStep();

    Vector3 Get3DPoint(double);
    Vector3 GetFirstDerivative(double);

    Helix(double, double);
    Helix();
    ~Helix();
private:
    double _radii;
    double _step;
};

#endif // !_HELIX_
