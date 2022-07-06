#include<iostream>
#include<string>
using namespace std;

class Person
    {
    private:
        int Personalnumb;
    public:
        string firstName;
        string lastname;
    protected:
        int Age;

    public:
        void displayPN(int p) 
    {
        Personalnumb=p;
        cout << "Personal Numb = "<< Personalnumb<<endl;
    }
        void displayFN(string f)
    {
        firstName=f;
        cout << "First Name = "<<firstName<<endl;
    }
        void displayLN(string l)
    {
        lastname=l;
        cout << "Last Name = "<<lastname<<endl;
    }
    };
class YoungAdult : public Person
    { 
    public:
        void displayAge(int a)
    {
        Age=a;
        cout << "Age = "<<Age<<endl;
    }
    };

    
int main(int argc, char const *argv[])
{
    int id;
    int age;
    string name;
    string familyname;

    YoungAdult I;

    cout << "Enter your ID: ";
    cin >> id;
    cout << "Enter your First Name: ";
    cin >> name;
    cout << "Enter your Last Name: ";
    cin >> familyname;
    cout << "Enter your Age: ";
    cin >> age;

    I.displayPN(id);
    I.displayFN(name);
    I.displayLN(familyname);
    I.displayAge(age);

    return 0;
}
