#include "pch.h"
#include "Point3D.h"

Point3D::Point3D()
{
}

Point3D::Point3D(double x, double y) :
    mX(x),
    mY(y)
{
}

Point3D::~Point3D()
{
}

double Point3D::x()
{
    return mX;
}

double Point3D::y()
{
    return mY;
}

void Point3D::setX(double inX)
{
    mX = inX;
}

void Point3D::setY(double inY)
{
    mY = inY;
}
