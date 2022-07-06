#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person
{
    string name;
    string address;
    string phone_number;
    string email_adress;
};
class Student : Person
{
    string Year1 = "Freshman";
    string Year2 = "Sophmore";
    string Year3 = "Junior";
    string Year4 = "Senior";
};
class Employee : Person
{
    string office;
    int salary;
    string Date_Hired;
};
class MyDate
{
    int year;
    int month;
    int day;
};
class Faculty : Employee
{
    int Office_Hours;
    string Rank;
};
class Staff : Employee
{
    string Title;
};

int main(int argc, char const *argv[])
{
    return 0;
}
