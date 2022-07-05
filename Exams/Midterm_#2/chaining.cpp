#include <iostream>

using namespace std;

class A
{
    public:
    A()
    {
        cout<<"A Constructor!"<<endl;
    }
    ~A()
    {
        cout<<"A Destructor!"<<endl;
    }
    
};
class B: public A
{
    public:
    B()
    {
        cout<<"B Constructor!"<<endl;
    }
    ~B()
    {
        cout<<"B Destructor!"<<endl;
    }
};

int main()
{
    B c;

    return 0;
}
