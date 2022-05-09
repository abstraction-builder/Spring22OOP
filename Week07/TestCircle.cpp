#include <iostream>

class Circle {
    public:
        double radius = 0.0;

    public:
        Circle(){
            radius = 1.0;
        }

        Circle(double newRadius){
            radius = newRadius;
        }

        double getArea(){
            return radius * radius * 3.14159;
        }

};

int main(){
    Circle c1;
    Circle c2(25);
    Circle c3(125);

    std::cout << "Area of c1 with radius of " << c1.radius << " is " << c1.getArea() << "\n";
    std::cout << "Area of c2 with radius of " << c2.radius << " is " << c2.getArea() << "\n";
    std::cout << "Area of c3 with radius of " << c3.radius << " is " << c3.getArea() << "\n";

    return 0;
}