#include <iostream>

class Circle {
    private:
        double radius; // proprety
    
    public:
        Circle(){
            radius = 1;
        }

        Circle(double newRadius){
            radius = newRadius;
        }

        double getRadius(){
            return radius;
        }
        
        double getArea(){
            return 3.14159 * radius * radius;
        }


};

int main(){
    Circle c1; // Default consturctor is called
    std::cout << "Area of a cirlce with radius " << c1.getRadius() << " is " << c1.getArea() << std::endl; 

    /*
    Circle c2(3);
    //std::cout << "Area of a cirlce with radius " << c2.radius << " is " << c2.getArea() << std::endl; 

    Circle c3(true, 3.5);
    std::cout << "Area of a cirlce with radius " << c3.radius << " is " << c3.getArea() << " and its fileed" << std::endl;

    c3.radius = 12.5;
    std::cout << "Area of a cirlce with radius " << c3.radius << " is " << c3.getArea() << " and its fileed" << std::endl; 
    */

    return 0;
}