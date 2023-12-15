#pragma once

class Grid
{
public:
    Grid(QVector<GLfloat>& vertices, QVector<GLfloat>& colors, int gridSize);
    ~Grid();
private:
    void storeGrid(QVector<GLfloat>& vertices, QVector<GLfloat>& colors, int gridSize);
};
