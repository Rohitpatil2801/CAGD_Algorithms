# Hermite Curve 

## Overview
This project is a graphical application developed in C++ using the Qt framework with OpenGL for rendering. The primary objective is to serve as a visualization tool to demonstrate how a Hermite curve is drawn on the screen. The project is structured into four main components, each fulfilling a distinct role in achieving the desired functionality.

### 1. Geometry Library (Geometry.lib)
   - `Point3D.h` and `Point3D.cpp`: Contain definitions and implementations for points.

   - `Line.h` and `Line.cpp`: Contain definitions and implementations for lines.

   - **Exported as DLL:** The Geometry Library is exported as a Dynamic Link Library (DLL), promoting reusability in other projects.

### 2. Algorithm Library (Algorithm.lib)
   - `Hermite.h` and `Hermite.cpp`: Implement the Hermite curve equation.

   - **Responsibility:** The algorithm takes input as coordinates of four points to draw the curve.
  
### 3. Visualizer (VisualizerApp)
   - `Visualizer.h` and `Visualizer.cpp`: Implement GUI components.

   - `OpenGLWindow.h` and `OpenGLWindow.cpp`: Responsible for handling OpenGL rendering.

   - **User Interface (UI):** Provides users with the ability to input co-ordinates of four points.
   
   - **Functionality:** Upon clicking the "Hermite" button, the application renders, and the curve is drawn.

### 4. Main Program (main.cpp)
   - `main.cpp`: Entry point for the application, initializes and runs the graphical line clipping tool.

