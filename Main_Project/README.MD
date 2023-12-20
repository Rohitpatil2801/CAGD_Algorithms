# Visualizer Project

## Overview

This project is a graphical application developed in C++ using the Qt framework with OpenGL for rendering. The primary objective is to serve as a visualization tool to demonstrate how CAGD algorithm works. This project include four algorithms, each fulfilling a distinct role in achieving the desired functionality.

### Algorithms and Equations

1. Sutherland Line Clipping Algorithm:-
- The Sutherland-Hodgman line clipping algorithm efficiently determines and outputs the visible portion of a line segment within a specified rectangular window in computer graphics.

2. Bezier Curve
- A Bézier curve is a smooth curve defined by control points, commonly used in computer graphics and design. Its shape is influenced by the positions of these points, and it comes in various degrees, with quadratic and cubic being most common.

3. Hermite Curve
- A Hermite curve is a type of spline curve defined by two points and their associated tangent vectors. It is commonly used in computer graphics and computer-aided design to create smooth and predictable curves. The curve interpolates the given points and follows the specified tangent vectors at those points, providing control over both position and direction along the curve.

4. BSpline Curve
- A B-spline curve is a smooth and flexible mathematical curve defined by control points and basis functions, widely used in computer graphics and design for its local control and versatility in approximating complex shapes.

### File Structure

**Libraries**

1. `Sutherland.lib` - Includes `Sutherland.h` and `Sutherland.cpp`

2. `Bezier.lib` - Includes `Bezier.h` and `Bezier.cpp`

3. `Hermite.lib` - Includes `Hermite.h` and `Bezier.cpp`

4. `BSpline.lib` - Includes `BSpline.h` and `BSpline.cpp`

5. `Geometry.lib`

Includes various geometry classes as follows

- `Point3D.h` and `Point3D.cpp`

- `Line.h` and `Line.cpp`

- `Shape.h` and `Shape.cpp`

**Visualizer App** 

1. Includes `Visualizer.h` and `Visualizer.cpp`
- GUI components are implemented in these files.

2. Includes `OpenGLWindow.h` and `OpenGLWindow.cpp`
- Responsible for handling OpenGL rendering.

3. And `main.cpp`
- Entry point for the application, initializes and runs the graphical line clipping tool.

