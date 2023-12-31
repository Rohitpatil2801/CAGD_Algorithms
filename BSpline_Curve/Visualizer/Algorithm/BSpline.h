#pragma once
#include "Point3D.h"
#include "Algorithm.h"
#include <iostream>
#include <vector>

using namespace std;

class ALGORITHM_API BSpline3D {
public:
    BSpline3D(Point3D inP0, Point3D inP1, Point3D inP2, Point3D inP3);
    ~BSpline3D();

    double basisFunction(int i, int k, double t);
    void evaluate(double t, vector<float>& mVertices, vector<float>& mColors);
    void drawCurveBspline(vector<float>& mVertices, vector<float>& mColors);

private:
    std::vector<double> knots;

    int degree;

    Point3D mP0;
    Point3D mP1;
    Point3D mP2;
    Point3D mP3;
};
