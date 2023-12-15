#pragma once
#include "Point3D.h"

class Line
{
public:
	Line(Point3D p1, Point3D p2);
	~Line();

public:
	Point3D getStart();
	Point3D getEnd();
	void setP1(Point3D);
	void setP2(Point3D);
private:
	Point3D mStart;
	Point3D mEnd;
};

