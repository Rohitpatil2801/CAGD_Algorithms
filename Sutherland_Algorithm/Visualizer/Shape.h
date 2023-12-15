#pragma once
#include "Line.h"
#include <vector>
class Shape
{
public:
	Shape(Point3D min, Point3D max);
	~Shape();

	std::vector<Line> getShape();
private:
	std::vector<Line> mLines;
};

