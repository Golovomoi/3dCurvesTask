#pragma once
#ifndef _BASECURVE_H_
#define _BASECURVE_H_
#include <utility>
#include <tuple>
// �}���w�~�� �����x�t�p���� �t�|�� Vector3 �����t�u�|���~���� ���������{�������� �y �r���~�u�����y �u�v �����t�u�|���~�� �{ ���������u�z �}�p���u�}�p���y�{�y �{������������ �}���w�~�� �q���|�� �q�� �������u�t�u�|�y���� �t�|�� �q���|���u�s�� �������u�{���p, �~�� �r ���p�}�{�p�� �x�p�t�p�~�y�� ���p�{���z �����t�����t �����y���p�� �������y�}�p�|���~���}.
typedef std::tuple<double, double, double> Vector3;

class BaseCurve
{
public:
    BaseCurve();
    ~BaseCurve();
    void SetCenter(double, double, double);
    Vector3 GetCenter();
    virtual Vector3 Get3DPoint(double) = 0;
    virtual Vector3 GetFirstDerivative(double) = 0;
protected:
    Vector3 _center;

};

#endif // _BASECURVE_H_
