#ifndef __LIB_MATH_H
#define __LIB_MATH_H

#include <stdint.h>

typedef struct {
    double x;
    double y;
} Point;

typedef struct {
    float a;
    float b;
    float c;
    float d;
} Polynomial3;

typedef struct {
    float x0, y0, x1, y1;
    float m0, m1;
    float a, b, c, d;
} CubicSpline;

float Sqrt(float x);
float pow_float(float x, uint8_t n);
float LinearInterpolation(float x, float x1, float x2, float y1, float y2);
float CubicSplineInterpolation(float x, float x1, float x2, float y1, float y2, float y1_, float y2_);

void Polynomial3_init(Polynomial3* poly, float a, float b, float c, float d);
float Polynomial3_eval(Polynomial3* poly, float x);
float Polynomial3_d1(Polynomial3* poly, float x);
float Polynomial3_d2(Polynomial3* poly, float x);
float Polynomial3_d3(Polynomial3* poly, float x);

void CubicSpline_init(CubicSpline* spline, Point p0, Point p1, Point slope);
float CubicSpline_eval(CubicSpline* spline, float x);
float CubicSpline_dx(CubicSpline* spline, float x);

#endif