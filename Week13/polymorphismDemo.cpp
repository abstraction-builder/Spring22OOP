#include <iostream>
#include "GeometricObject.hpp"
#include "DerivedCircle.hpp"
#include "DerivedRectangle.hpp"

void displayGeometricObject(const GeometricObject& gObj){
    std::cout << gObj.toString() << std::endl;
}

int main()
{
    GeometricObject geometricObject;
    displayGeometricObject(geometricObject);

    Circle circle(5);
    displayGeometricObject(circle);

    Rectangle rec(4, 6);
    displayGeometricObject(rec);

    return 0;
}