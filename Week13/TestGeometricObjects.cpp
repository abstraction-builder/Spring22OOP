#include "GeometricObject.hpp"
#include "DerivedCircle.hpp"
#include "DerivedRectangle.hpp"
#include <iostream>

using namespace std;

int main()
{
    GeometricObject shape;
    shape.setColor("red");
    shape.setFilled(true);
    cout << shape.toString() << endl << " color: " << shape.getColor() << " filled: " << (shape.isFilled() ? "true" : "false") << endl;

    Circle circle(5);
    circle.setColor("black");
    circle.setFilled(false);
    cout << circle.toString() << endl << " color: " << circle.getColor()
                                << " filled: " << (circle.isFilled() ? "true" : "false")
                                << " radius: " << circle.getRadius()
                                << " area: " << circle.getArea()
                                << " perimeter: " << circle.getPerimeter() << endl;

    Rectangle rec(2, 3);
    rec.setColor("orange");
    rec.setFilled(true);
    cout << rec.toString() << endl
        << " color: " << circle.getColor()
        << " filled: " << (circle.isFilled() ? "true" : "false")
        << " width: " << rec.getWidth()
        << " height: " << rec.getHeight()
        << " area: " << rec.getArea()
        << " perimeter: " << rec.getPerimeter() << endl;

    return 0;
}