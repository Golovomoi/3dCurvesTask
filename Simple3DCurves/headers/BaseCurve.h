#pragma once
#ifndef _BASECURVE_H_
#define _BASECURVE_H_
#include <utility>
#include <tuple>
#define _USE_MATH_DEFINES
#include <math.h>
#include <string>

// „}„€„w„~„€ „ƒ„€„x„t„p„„„ „t„|„‘ Vector3 „€„„„t„u„|„„~„…„ „ƒ„„„‚„…„{„„„…„‚„… „y „r„„~„u„ƒ„„„y „u„v „€„„„t„u„|„„~„€ „{ „„‚„€„‰„u„z „}„p„„„u„}„p„„„y„{„y „{„€„„„€„‚„…„ „}„€„w„~„€ „q„„|„€ „q„ „€„„‚„u„t„u„|„y„„„ „t„|„‘ „q„€„|„„u„s„€ „„‚„€„u„{„„„p, „~„€ „r „‚„p„}„{„p„‡ „x„p„t„p„~„y„‘ „„„p„{„€„z „„€„t„‡„€„t „ƒ„‰„y„„„p„ „€„„„„y„}„p„|„„~„„}.
typedef std::tuple<double, double, double> Vector3;

class BaseCurve
{
public:
    BaseCurve();
    ~BaseCurve();

    //„…„ƒ„„„p„~„p„r„|„y„r„p„u„„ „ˆ„u„~„„„‚ „{„‚„y„r„€„z, „„€ „…„}„€„|„‰„p„~„y„ 0
    void SetCenter(double, double, double);
    Vector3 GetCenter();

    int GetType();
    std::string GetTypeName();

    virtual Vector3 Get3DPoint(double) = 0;
    virtual Vector3 GetFirstDerivative(double) = 0;

protected:
    Vector3 _center;
    int _type;
    std::string _curveTypeName;


};

#endif // _BASECURVE_H_
