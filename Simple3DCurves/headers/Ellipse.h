#pragma once
#ifndef _ELLIPSE_
#define _ELLIPSE_

#include "BaseCurve.h"

class Ellipse : public BaseCurve
{
public:

    Ellipse();
    Ellipse(double r);
    ~Ellipse();
private:
    double _radii;
};

#endif // !_ELLIPSE_