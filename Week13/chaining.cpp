#include <iostream>

class Person {
    public:
        Person()
        {
            std::cout << "Inside Person's constructor " << std::endl;
        }

        ~Person()
        {
            std::cout << "Inside Person's destructor " << std::endl;
        }
};

class Employ : public Person
{
    public:
        Employ()
        {
            std::cout << "Inside Employee constructor" << std::endl;
        }

        ~Employ()
        {
            std::cout << "Inside Employee destructor" << std::endl;
        }
};

class Faculty : public Employ
{
    public:
        Faculty()
        {
            std::cout << "Inside Faculty constructor" << std::endl;
        }

        ~Faculty()
        {
            std::cout << "Inside Faculty destructor" << std::endl;

        }
};

int main()
{
    Faculty faculty; 

    return 0;
}