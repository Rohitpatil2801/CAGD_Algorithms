#pragma once
#include <QtWidgets/QMainWindow>
#include "OpenGLWindow.h"

class OpenGLWindow;

class Visualizer : public QMainWindow
{
    Q_OBJECT

public:
    Visualizer(QWindow* parent = nullptr);
    ~Visualizer();

private:
    void setupUi();

public:
    QVector<QVector2D> mPixelVertices;
    QVector<GLfloat>   mVertices;
    QVector<GLfloat>   mColors;

private:
    QWidget* mCentralWidget;
    OpenGLWindow* mRenderer;

    QPushButton* mPushButton1;
    QPushButton* mPushButton2;
    QPushButton* mPushButton3;
    QPushButton* mPushButton4;

    QLineEdit* mLineEdit1;
    QDoubleSpinBox* mLineEdit2;
    QDoubleSpinBox* mLineEdit3;
    QDoubleSpinBox* mLineEdit4;
    QDoubleSpinBox* mLineEdit5;

    QLabel* mLabel1;
    QLabel* mLabel2;
    QLabel* mLabel3;
    QLabel* mLabel4;
    QLabel* mLabel5;

    double xCoordinate;
    double yCoordinate;
    double x1Coordinate;
    double y1Coordinate;
    double xMin;
    double yMin;
    double xMax;
    double yMax;

public slots:
    void addLine();
    void addGrid();
    void bresenhamsLine();
};