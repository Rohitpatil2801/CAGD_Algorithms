#pragma once
#include "Geometry.h"
class GEOMETRY_API Point3D
{
public:
    Point3D();
    Point3D(double x, double y);
    ~Point3D();

public:
    double x();
    double y();

    void setX(double inX);
    void setY(double inY);

private:
    double mX;
    double mY;
};
