#include "stdafx.h"
#include "Bresenhams.h"

Bresenhams::Bresenhams(Line l, QVector<QVector2D>& pixelVertices)
{
    pixelData(l, pixelVertices);
}

Bresenhams::~Bresenhams()
{
}

void Bresenhams::pixelData(Line l, QVector<QVector2D>& pixelVertices)
{
    // Bresenham's line drawing algorithm
    double x1 = l.getStart().x();
    double y1 = l.getStart().y();
    double x2 = l.getEnd().x();
    double y2 = l.getEnd().y();

    double dx = abs(x2 - x1);
    double dy = abs(y2 - y1);
    double sx = (x1 < x2) ? 1.0f : -1.0f;
    double sy = (y1 < y2) ? 1.0f : -1.0f;
    double err = dx - dy;

    while (x1 < x2 || y1 < y2) {
        pixelVertices.append(QVector2D(round(x1), round(y1)));
        pixelVertices.append(QVector2D(round(x1) + 1, round(y1)));
        pixelVertices.append(QVector2D(round(x1) + 1, round(y1) + 1));
        pixelVertices.append(QVector2D(round(x1), round(y1) + 1));

        double e2 = 2 * err;
        if (e2 > -dy) {
            err -= dy;
            x1 += sx;
            x1 = round(x1);
        }
        if (e2 < dx) {
            err += dx;
            y1 += sy;
            y1 = round(y1);
        }
    }
}