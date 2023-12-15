#pragma once

#include <QtWidgets/QMainWindow>
#include "Visualizer.h"
#include "OpenGLWindow.h"
#include "sutherland.h"
#include "Shape.h"
#include <Qvector>

class OpenGLWindow;

class Visualizer : public QMainWindow {
    Q_OBJECT

public:
    Visualizer(QWindow* parent = nullptr);
    ~Visualizer();

private:
    void setupUi();

private slots:
    void clipButtonClicked();

private:
    QWidget* mCentralWidget;
    OpenGLWindow* mRenderer;

    QLabel* mlabel1;
    QLabel* mlabel2;
    QLabel* mlabel3;
    QLabel* mlabel4;
    QLabel* mlabel5;
    QLabel* mlabel6;
    QLabel* mlabel7;
    QLabel* mlabel8;
    QLabel* mlabel9;
    QLabel* mlabel10;

    QDoubleSpinBox* mdoubleSpinBox1;
    QDoubleSpinBox* mdoubleSpinBox2;
    QDoubleSpinBox* mdoubleSpinBox3;
    QDoubleSpinBox* mdoubleSpinBox4;
    QDoubleSpinBox* mdoubleSpinBox5;
    QDoubleSpinBox* mdoubleSpinBox6;
    QDoubleSpinBox* mdoubleSpinBox7;
    QDoubleSpinBox* mdoubleSpinBox8;

    QPushButton* mpushButton;

    QVector<GLfloat>mVertices;
    QVector<GLfloat>mColors;
};
