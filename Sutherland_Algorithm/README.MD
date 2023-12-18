# Sutherland-Cohen Line Clipping Algorithm

## Overview
This project is a graphical application developed in C++ using the Qt framework with OpenGL for rendering. Its primary goal is to function as a visualization tool for clipping lines within a rectangular window. The project is organized into three main components, each fulfilling a distinct role in achieving the desired functionality.

### 1. Geometry Library (Geometry.lib)
   - `Point3D.h` and `Point3D.cpp`: Definitions and implementations for points.

   - `Line.h` and `Line.cpp`: Definitions and implementations for lines.

   - `Shape.h` and `Shape.cpp`: Definitions and implementations for generic shapes.

   - **Exported as DLL:** The Geometry Library is exported as a Dynamic Link Library (DLL), promoting reusability in other projects.

### 2. Algorithm Library (Algorithm.lib)
   - `Sutherland.h` and `Sutherland.cpp`: Implementation of the Sutherland-Cohen Line Clipping Algorithm.

   - **Responsibility:** The core clipping algorithm processes user input, including a line and rectangular window dimensions, and computes the clipped line.

### 3. Visualizer (VisualizerApp)
   - `Visualizer.h` and `Visualizer.cpp`: GUI components are implemented in these files.

   - `OpenGLWindow.h` and `OpenGLWindow.cpp`: Responsible for handling OpenGL rendering.

   - **User Interface (UI):** Provides users with the ability to input line coordinates and window co-ordinates.
   
   - **Functionality:** Upon clicking the "Clip" button, the application renders the clipped line within the specified window.

### 4. Main Program (main.cpp)
   - `main.cpp`: Entry point for the application, initializes and runs the graphical line clipping tool.


