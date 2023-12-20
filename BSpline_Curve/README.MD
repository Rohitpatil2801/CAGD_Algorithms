# B-Spline Curve 

## Overview
This C++ graphical application, developed using the Qt framework with OpenGL, serves as a visualization tool for drawing B-Spline curves on the screen. The project is structured into four main components, each fulfilling a distinct role in achieving the desired functionality.

### 1. Geometry Library (GeometryLib)
   - `Point3D.h` and `Point3D.cpp`: Contain definitions and implementations for points.
   - `Line.h` and `Line.cpp`: Contain definitions and implementations for lines.
   - **Exported as DLL:** The Geometry Library is exported as a Dynamic Link Library (DLL), promoting reusability in other projects.

### 2. Algorithm Library (AlgorithmLib)
   - `BSpline.h` and `BSpline.cpp`: Implemented the B-spline algorithm.
   - **Responsibility:** The algorithm takes input as coordinates of four control points to draw the B-spline curve.

### 3. Visualizer (VisualizerApp)
   - `Visualizer.h` and `Visualizer.cpp`: Implement GUI components.
   - `OpenGLWindow.h` and `OpenGLWindow.cpp`: Responsible for handling OpenGL rendering.
   - **User Interface (UI):** Provides users with the ability to input coordinates of four control points.
   - **Functionality:** Upon clicking the "B-Spline" button, the application renders, and the B-spline curve is drawn.

### 4. Main Program (main.cpp)
   - `main.cpp`: Entry point for the application, initializes and runs the graphical B-spline curve drawing tool.

