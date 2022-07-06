#include "GeometricObject.cpp"
#include<iostream>
#include<math.h>
#include <string>
#include <vector>
using namespace std;

class Triangle : public GeometricObject
{
    private:
    double side1 = 1.0;
    double side2 = 1.0;
    double side3 = 1.0;
    
    public:

    Triangle(double side1, double side2, double side3)
    {
        this->side1 = side1;
        this->side2 = side2;
        this->side3 = side3;
    }
    double setSide1()
    {
        return side1;
    }
    double setSide2()
    {
        return side2;
    }
    double setSide3()
    {
        return side3;
    }
    void setSide1(double side1)
    {
        this->side1 = side1;
    }
    void setSide2(double side2)
    {
        this->side2 = side2;
    }
    void setSide3(double side3)
    {
        this->side3 = side2;
    }
    const double getArea(int Area)
    {
        Area=sqrt((side1+side2+side3)/2*((side1+side2+side3)/2-side1)*((side1+side2+side3)/2-side2)*((side1+side2+side3)/2-side3));
        cout<<"The Area of the Triangle: "<<Area<<endl;
    }
    const double getPerimeter(int Perimeter)
    {
        Perimeter=side1 + side2 + side3;
        cout<<"The Parameter of the Triangle: "<<Perimeter<<endl;
    }
};

int main(int argc, char const *argv[])
{
    Triangle Tri;

    Tri.getPerimeter();
    Tri.getArea();
    return 0;
}

