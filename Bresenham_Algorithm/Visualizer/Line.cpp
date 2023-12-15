#include "stdafx.h"
#include "Line.h"
Line::Line(Point3D p1, Point3D p2) : mStart(p1), mEnd(p2)
{
}

Line::~Line()
{

}

Point3D Line::getStart()
{
	return mStart;
}

Point3D Line::getEnd()
{
	return mEnd;
}

void Line::setP1(Point3D p)
{
	mStart = p;
}

void Line::setP2(Point3D p)
{
	mEnd = p;
}