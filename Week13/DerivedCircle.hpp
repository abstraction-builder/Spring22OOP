#pragma once

#include "GeometricObject.hpp"

class Circle : public GeometricObject
{
    public:
        Circle();
        Circle(double);
        Circle(double radius, const string& color, bool filled);
        double getRadius() const;
        void setRadius(double);
        double getArea() const;
        double getPerimeter() const;
        double getDiameter() const;
        string toString() const;

    private:
        double radius;

};