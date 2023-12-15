#include "stdafx.h"
#include "Visualizer.h"
#include "OpenGLWindow.h"
#include "Line.h"
#include "Grid.h"


Visualizer::Visualizer(QWindow* parent) : QMainWindow(nullptr)
{
    setupUi();
    connect(mPushButton1, &QPushButton::clicked, this, &Visualizer::addGrid);
    connect(mPushButton2, &QPushButton::clicked, this, &Visualizer::addLine);
    connect(mPushButton3, &QPushButton::clicked, this, &Visualizer::bresenhamsLine);
    connect(mRenderer, SIGNAL(shapeUpdate()), mRenderer, SLOT(update()));
}

Visualizer::~Visualizer()
{

}
void Visualizer::setupUi() {
    resize(600, 400);

    mLabel1 = new QLabel(this);
    mLabel1->setObjectName("label");
    mLabel1->setText("Grid Size");
    mLabel1->setGeometry(QRect(470,0, 85, 20));

    mLineEdit1 = new QLineEdit(this);
    mLineEdit1->setObjectName("lineEdit_6");
    mLineEdit1->setGeometry(QRect(450, 25, 85,20));

    mPushButton1 = new QPushButton(this);
    mPushButton1->setObjectName("pushButton");
    mPushButton1->setText("Draw Grid");
    mPushButton1->setGeometry(QRect(350,75, 85, 40));


    mLabel2 = new QLabel(this);
    mLabel2->setObjectName("label");
    mLabel2->setText("X1");
    mLabel2->setGeometry(QRect(605, 0, 85, 20));

    mLineEdit2 = new QDoubleSpinBox(this);
    mLineEdit2->setObjectName("lineEdit_6");
    mLineEdit2->setGeometry(QRect(570, 25, 85, 20));

    mLabel3 = new QLabel(this);
    mLabel3->setObjectName("label");
    mLabel3->setText("Y1");
    mLabel3->setGeometry(QRect(705, 0, 85, 20));

    mLineEdit3 = new QDoubleSpinBox(this);
    mLineEdit3->setObjectName("lineEdit_6");
    mLineEdit3->setGeometry(QRect(670, 25, 85, 20));

    mLabel4 = new QLabel(this);
    mLabel4->setObjectName("label");
    mLabel4->setText("X2");
    mLabel4->setGeometry(QRect(805, 0, 85, 20));

    mLineEdit4 = new QDoubleSpinBox(this);
    mLineEdit4->setObjectName("lineEdit_6");
    mLineEdit4->setGeometry(QRect(770, 25, 85, 20));

    mLabel5 = new QLabel(this);
    mLabel5->setObjectName("label");
    mLabel5->setText("Y2");
    mLabel5->setGeometry(QRect(905, 0, 85, 20));

    mLineEdit5 = new QDoubleSpinBox(this);
    mLineEdit5->setObjectName("lineEdit_6");
    mLineEdit5->setGeometry(QRect(870, 25, 85, 20));

    mPushButton2 = new QPushButton(this);
    mPushButton2->setObjectName("pushButton");
    mPushButton2->setText("Draw Line");
    mPushButton2->setGeometry(QRect(1000,75, 85, 40));

    mPushButton3 = new QPushButton(this);
    mPushButton3->setObjectName("pushButton");
    mPushButton3->setText("Draw Bresenhams Line");
    mPushButton3->setGeometry(QRect(600,90, 200, 30));

    mRenderer = new OpenGLWindow(QColor(0, 0, 0), this);
    mRenderer->setGeometry(QRect(200, 140, 1000, 600));

    setWindowTitle(QCoreApplication::translate("Bresenham's", "Bresenham's", nullptr));

}

void Visualizer::addLine()
{
    double x1 = mLineEdit2->text().toFloat();
    double y1 = mLineEdit3->text().toFloat();
    double x2 = mLineEdit4->text().toFloat();
    double y2 = mLineEdit5->text().toFloat();

    Line l(Point3D(x1, y1), Point3D(x2, y2));

    mRenderer->addLine(l);
}

void Visualizer::addGrid()
{
    int gridSize = mLineEdit1->text().toInt();
    mRenderer->addGrid(gridSize);
}

void Visualizer::bresenhamsLine()
{
    double x1 = mLineEdit2->text().toFloat();
    double y1 = mLineEdit3->text().toFloat();
    double x2 = mLineEdit4->text().toFloat();
    double y2 = mLineEdit5->text().toFloat();

    Line l(Point3D(x1, y1), Point3D(x2, y2));
    mRenderer->bresenhams(l);
}
