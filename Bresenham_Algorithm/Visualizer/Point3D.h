#pragma once
class Point3D
{
public:
    Point3D(double inX, double inY);
    ~Point3D();
    
    double x();
    double y();

    void setX(double x);
    void setY(double y);

private:
    double mX;
    double mY;
};