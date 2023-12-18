# Bresenham's Line Drawing Algorithm

## Overview
This project is a graphical application developed in C++ using the Qt framework with OpenGL for rendering. The primary objective is to serve as a visualization tool to demonstrate how Bresenham's algorithm selects pixels to draw a line on the screen. The project is structured into four main components, each fulfilling a distinct role in achieving the desired functionality.

### 1. Geometry Library (Geometry.lib)
   - `Point3D.h` and `Point3D.cpp`: Definitions and implementations for points.

   - `Line.h` and `Line.cpp`: Definitions and implementations for lines.

   - **Exported as DLL:** The Geometry Library is exported as a Dynamic Link Library (DLL), promoting reusability in other projects.

### 2. Algorithm Library (Algorithm.lib)
   - `Bresenham.h` and `Bresenham.cpp`: Implementation of Bresenham's Line Clipping Algorithm.

   - **Responsibility:** The core algorithm processes user input, including a line and vector of pixels and compute pixels to highlight.

### 3. Visualizer (VisualizerApp)
   - `Visualizer.h` and `Visualizer.cpp`: GUI components are implemented in these files.

   - `OpenGLWindow.h` and `OpenGLWindow.cpp`: Responsible for handling OpenGL rendering.

   - `Grid.h` and `Grid.cpp`: Adds a grid to the visualization.

   - **User Interface (UI):** Provides users with the ability to input line coordinates, and grid size.

   - **Functionality:** Upon clicking the "Draw Bresenham's Line" button, the application renders the line and highlights pixels as cells of the grid.

### 4. Main Program (main.cpp)
   - `main.cpp`: Entry point for the application, initializes and runs the graphical line clipping tool.

