#include <iostream>
#include <fstream>
#include <vector>


void readInteger(std::vector<int> &vect)
{
    std::ifstream read("integers.txt");

    int i=0;

    while(true)
    {
        int line;
        read>>line;
        if(read.fail()) break;

        vect.push_back(line);
        i++;
    }
}

void median(std::vector<int> vect)
{

    sort(vect.begin(), vect.end());

    if (vect.size() % 2 == 0)
    {
        std::cout << std::endl << "Median of the values = "<< (vect[vect.size()/2 - 1] + vect[vect.size()/2]) / 2 << std::endl;
    }
    else 
    {
        std::cout << std::endl << "Median of the values = " << vect[vect.size()/2] << std::endl;
    }

}

void mean(std::vector<int> vect)
{
    double sum = 0;
    for(int i = 0; i<vect.size(); i++)
    {
        sum = sum +vect[i];
    }

    double mean = sum/vect.size();

    std::cout << "Mean of the values = " << mean <<std::endl;

}


int main()
{
    std::vector<int> vect;
    readInteger(vect);
    median(vect);
    mean(vect);
    return 0;

}