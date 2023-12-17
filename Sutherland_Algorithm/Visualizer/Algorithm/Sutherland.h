#ifndef SUTHERLAND_H
#define SUTHERLAND_H
#include <tuple>
#include "Line.h"
#include <vector>
#include "Algorithm.h"

class ALGORITHM_API Sutherland {
public:
    static Line clip(Line l, std::vector<Line>sides);

private:
    static int getCode(double x, double y, double xMin, double yMin, double xMax, double yMax);
};

#endif // SUTHERLAND_H


