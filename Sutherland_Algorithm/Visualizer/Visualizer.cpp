#include "stdafx.h"
#include "Visualizer.h"
#include "OpenGLWindow.h"
#include "Sutherland.h"

Visualizer::Visualizer(QWindow* parent) : QMainWindow(nullptr)
{
    setupUi();
   connect(mpushButton, &QPushButton::clicked, this, &Visualizer::clipButtonClicked);
}

Visualizer::~Visualizer()
{}



void Visualizer::setupUi() {
    resize(800, 600);
    
    //---------------------------------------------------------
    mlabel1 = new QLabel(this);
    mlabel1->setObjectName("mlabel1");
    mlabel1->setText("Clipping Region :");
    mlabel1->setGeometry(QRect(10, 10, 150, 50));

    //---------------------------------------------------------
    mlabel2 = new QLabel(this);
    mlabel2->setObjectName("Min_X");
    mlabel2->setText("Min X:");
    mlabel2->setGeometry(QRect(150, 10, 150, 50));

    mdoubleSpinBox1 = new QDoubleSpinBox(this);
    mdoubleSpinBox1->setObjectName("mdoubleSpinBox1");
    mdoubleSpinBox1->setGeometry(QRect(200, 20, 70, 25));
    //---------------------------------------------------------
    mlabel3 = new QLabel(this);
    mlabel3->setObjectName("Min_Y");
    mlabel3->setText("Min Y:");
    mlabel3->setGeometry(QRect(300, 10, 150, 50));

    mdoubleSpinBox2 = new QDoubleSpinBox(this);
    mdoubleSpinBox2->setObjectName("mdoubleSpinBox2");
    mdoubleSpinBox2->setGeometry(QRect(350, 20, 70, 25));

    //---------------------------------------------------------

    mlabel4 = new QLabel(this);
    mlabel4->setObjectName("Max_X");
    mlabel4->setText("Max X:");
    mlabel4->setGeometry(QRect(450, 10, 150, 50));

    mdoubleSpinBox3 = new QDoubleSpinBox(this);
    mdoubleSpinBox3->setObjectName("mdoubleSpinBox3");
    mdoubleSpinBox3->setGeometry(QRect(500, 20, 70, 25));
    //---------------------------------------------------------

    mlabel5 = new QLabel(this);
    mlabel5->setObjectName("Max_Y");
    mlabel5->setText("Max Y:");
    mlabel5->setGeometry(QRect(600, 10, 150, 50));

    mdoubleSpinBox4 = new QDoubleSpinBox(this);
    mdoubleSpinBox4->setObjectName("mdoubleSpinBox4");
    mdoubleSpinBox4->setGeometry(QRect(660, 20, 70, 25));

    //---------------------------------------------------------------------------------------------
    mlabel6 = new QLabel(this);
    mlabel6->setObjectName("mlabel6");
    mlabel6->setText("Line :");
    mlabel6->setGeometry(QRect(10, 60, 150, 50));

    //---------------------------------------------------------
    mlabel7 = new QLabel(this);
    mlabel7->setObjectName("Start_X");
    mlabel7->setText("Start_X:");
    mlabel7->setGeometry(QRect(150, 60, 150, 50));

    mdoubleSpinBox5 = new QDoubleSpinBox(this);
    mdoubleSpinBox5->setObjectName("mdoubleSpinBox5");
    mdoubleSpinBox5->setGeometry(QRect(200, 70, 70, 25));
    //---------------------------------------------------------
    mlabel8 = new QLabel(this);
    mlabel8->setObjectName("Start_Y");
    mlabel8->setText("Start_Y:");
    mlabel8->setGeometry(QRect(300, 60, 150, 50));

    mdoubleSpinBox6 = new QDoubleSpinBox(this);
    mdoubleSpinBox6->setObjectName("mdoubleSpinBox6");
    mdoubleSpinBox6->setGeometry(QRect(350, 70, 70, 25));

    //---------------------------------------------------------

    mlabel9 = new QLabel(this);
    mlabel9->setObjectName("End_X");
    mlabel9->setText("End_X:");
    mlabel9->setGeometry(QRect(450, 60, 150, 50));

    mdoubleSpinBox7 = new QDoubleSpinBox(this);
    mdoubleSpinBox7->setObjectName("mdoubleSpinBox7");
    mdoubleSpinBox7->setGeometry(QRect(500, 70, 70, 25));
    //---------------------------------------------------------

    mlabel10 = new QLabel(this);
    mlabel10->setObjectName("End_Y");
    mlabel10->setText("End_Y:");
    mlabel10->setGeometry(QRect(600, 60, 150, 50));

    mdoubleSpinBox8 = new QDoubleSpinBox(this);
    mdoubleSpinBox8->setObjectName("mdoubleSpinBox8");
    mdoubleSpinBox8->setGeometry(QRect(660, 70, 70, 25));

    //-------------------------------------------------------------

    mpushButton = new QPushButton(this);
    mpushButton->setObjectName("mpushButton");
    mpushButton->setText("Clip");
    mpushButton->setGeometry(QRect(320,120,100, 25));

    //--------------------------------------------------------------
    mRenderer = new OpenGLWindow(QColor(0, 0, 0), this);
    mRenderer->setGeometry(QRect(100, 170, 600, 375));
    setWindowTitle(QCoreApplication::translate("Sutherland_Cohen", "Sutherland_Cohen", nullptr));
}


void Visualizer::clipButtonClicked()
{

    double minX = mdoubleSpinBox1->value();
    double minY = mdoubleSpinBox2->value();
    double maxX = mdoubleSpinBox3->value();
    double maxY = mdoubleSpinBox4->value();

    double startX = mdoubleSpinBox5->value();
    double startY = mdoubleSpinBox6->value();
    double endX = mdoubleSpinBox7->value();
    double endY = mdoubleSpinBox8->value();

    Point3D startPoint(startX, startY);
    Point3D endPoint(endX, endY);
    Line inputLine(startPoint, endPoint);

    Point3D minPoint = Point3D(minX, minY);
    Point3D maxPoint = Point3D(maxX, maxY);
    Shape rectangle = Shape(minPoint, maxPoint);
    std::vector<Line> sides = rectangle.getShape();

//----------------------------------------------------------------------

    double xMin = sides.at(0).getStart().x();
    double yMin = sides.at(0).getStart().y();
    double xMax = sides.at(2).getStart().x();
    double yMax = sides.at(2).getStart().y();

    mVertices << xMin << yMin;
    mVertices << xMax << yMin;

    mVertices << xMax << yMin;
    mVertices << xMax << yMax;

    mVertices << xMax << yMax;
    mVertices << xMin << yMax;

    mVertices << xMin << yMax;
    mVertices << xMin << yMin;

    mColors << 0.0f << 0.0f << 1.0f;
    mColors << 0.0f << 0.0f << 1.0f;

    mColors << 0.0f << 0.0f << 1.0f;
    mColors << 0.0f << 0.0f << 1.0f;

    mColors << 0.0f << 0.0f << 1.0f;
    mColors << 0.0f << 0.0f << 1.0f;

    mColors << 0.0f << 0.0f << 1.0f;
    mColors << 0.0f << 0.0f << 1.0f;

//----------------------------------------------------------------------

    Line clippedLine = Sutherland::clip(inputLine, sides);

    double x1 = clippedLine.getStart().x();
    double y1 = clippedLine.getStart().y();
    double x2 = clippedLine.getEnd().x();
    double y2 = clippedLine.getEnd().y();

    mVertices << x1 << y1;
    mVertices << x2 << y2;

    mColors << 1.0f << 0.0f << 1.0f;
    mColors << 1.0f << 0.0f << 1.0f;

//----------------------------------------------------------------------

    mRenderer->setVectorOfLines(mVertices);
    mRenderer->setColorOfLines(mColors);

    mRenderer->updateData(mVertices, mColors);

    mVertices.clear();
    mColors.clear();
}

   
