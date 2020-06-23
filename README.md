# 104intersection - Synthesis images, light rays and scene objects

- **Binary name:**  104intersection
- **Repository name:**  104intersection_2019
- **Repository rigths:** ramassage-tek
- **Language:** C, C++, perl 5, python 3 (>= 3.5), ruby 2 (>= 2.2), php 5.6, bash 4 and everything working on "the dump"
- **Choosed language:** C
- **Compilation:** via Makefile, including re, clean and fclean rules


# Subject

To create synthesis images (when doing ray tracing, for example), potential intersection points between
light rays and scene objects (here cylinders, spheres and cones) must be computed. This is exactly what
you have to do in this project.

To do so, you need to write a 3 dimensional equation of the considered surface, and inject into it the equation of the straight line representing the light ray. You’ll get a quadratic equation, with 0, 1, 2 or an infinite
number of solutions that will give you the intersection points coordinates.

The straight line is defined by the coordinates of a point by which it passes through and the coordinates of
a parallel vector.

O being the origin of the coordinate system, and X, Y and Z the axis, the surfaces that must be handled
in this project are:
   • O-centered spheres,
   • Cylinders of revolution around Z axis,
   • Cones of revolution around Z axis whose apex is O.

## Nao Marvin

| Details      | Nao Marvin :robot: (%) |
| ------------- |:-------------:|
| `rigor`: 100% \| `sphere`: 100% \| `cylinder`: 100% \| `cone`: 80% | 95.7% |

## Prerequisites

What you need

```
GlibC
gcc
make
```

## Compiling

Clone the repository and go inside. Then,

```
$ make
```

## Usage

```
~/B-MAT-100> ./104intersection opt xp yp zp xv yv zv p
```
- **opt (surface option):** 1 for a sphere, 2 for a cylinder, 3 for a cone
- **(xp, yp, zp):** coordinates of a point by which the light ray passes through
- **(xv, yv, zv):** coordinates of a vector parallel to the light ray
- **p (parameter):** radius of the sphere, radius of the cylinder, or angle formed by the cone and the Z-axis

## Examples

```
∼/B-MAT-100> ./104intersection 1 0 0 2 1 1 0 1
Sphere of radius 1
Line passing through the point (0, 0, 2) and parallel to the vector (1, 1, 0)
No intersection point.
```

```
∼/B-MAT-100> ./104intersection 1 4 0 3 0 0 -2 4
Sphere of radius 4
Line passing through the point (4, 0, 3) and parallel to the vector (0, 0, -2)
1 intersection point:
(4.000, 0.000, 0.000)
```

```
∼/B-MAT-100> ./104intersection 2 0 0 2 1 1 0 1
Cylinder of radius 1
Line passing through the point (0, 0, 2) and parallel to the vector (1, 1, 0)
2 intersection points:
(0.707, 0.707, 2.000)
(-0.707, -0.707, 2.000)
```

```
∼/B-MAT-100> ./104intersection 3 -1 -1 -1 1 1 5 30
Cone with a 30 degree angle
Line passing through the point (-1, -1, -1) and parallel to the vector (1, 1, 5)
2 intersection points:
(-1.568, -1.568, -3.842)
(-0.537, -0.537, 1.315)
```

```
∼/B-MAT-100> ./104intersection 2 1 0 0 0 0 1 1
Cylinder of radius 1
Line passing through the point (1, 0, 0) and parallel to the vector (0, 0, 1)
There is an infinite number of intersection points.
```

> :bulb: Mind the float numbers precision!