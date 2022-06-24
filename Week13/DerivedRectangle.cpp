#include "DerivedRectangle.hpp"

Rectangle::Rectangle()
{
    width = 1;
    height = 1;
}

Rectangle::Rectangle(double width, double height)
{
    setWidth(width);
    setHeight(height);
}

double Rectangle::getWidth() const
{
    return width;
}

void Rectangle::setWidth(double width)
{
    this->width = (width >= 0) ? width : 0;
}

double Rectangle::getHeight() const
{
    return height;
}

void Rectangle::setHeight(double height)
{
    this->height = (height >= 0) ? height : 0;
}

double Rectangle::getArea() const
{
    return width * height;
}

double Rectangle::getPerimeter() const
{
    return 2 * (width + height);
}

string Rectangle::toString() const
{
    return "Rectangle Object";
}