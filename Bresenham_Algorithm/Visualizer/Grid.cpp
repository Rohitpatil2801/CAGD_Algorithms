#include "stdafx.h"
#include "Grid.h"

Grid::Grid(QVector<GLfloat>& vertices, QVector<GLfloat>& colors, int gridSize)
{
    storeGrid(vertices, colors, gridSize);
}

Grid::~Grid()
{
}

void Grid::storeGrid(QVector<GLfloat>& vertices, QVector<GLfloat>& colors, int gridSize) {
    //const double gridSize = 8.0f;  // Adjust the grid size as needed
    const double step = 1.0f;

    // Draw horizontal grid lines
    for (double y = -gridSize / 2.0f; y <= gridSize / 2.0f; y += step)
    {
        vertices << -gridSize / 2.0f << y;
        vertices << gridSize / 2.0f << y;

        colors << 1.0f << 1.0f << 1.0f;
        colors << 1.0f << 1.0f << 1.0f;
    }

    // Draw vertical grid lines
    for (double x = -gridSize / 2.0f; x <= gridSize / 2.0f; x += step)
    {
        vertices << x << -gridSize / 2.0f;
        vertices << x << gridSize / 2.0f;

        colors << 1.0f << 1.0f << 1.0f;
        colors << 1.0f << 1.0f << 1.0f;
    }
}
