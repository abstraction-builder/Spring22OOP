#include <iostream>
#include <fstream>
#include <vector>


void Integer(std::vector<int> &vi)
{
    std::ifstream read("integers.txt");

    while(true)
    {
        int line;
        read >> line;
        if(read.fail()) break;

        vi.push_back(line);
    }
}

void median(std::vector<int> vi)
{

    sort(vi.begin(), vi.end());

    if (vi.size() % 2 == 0)
    {
        std::cout << std::endl << "Median  = "<< (vi[vi.size()/2 - 1] + vi[vi.size()/2]) / 2 << std::endl;
    }
    else 
    {
        std::cout << std::endl << "Median  = " << vi[vi.size()/2] << std::endl;
    }

}

void mean(std::vector<int> vi)
{
    double sum = 0;
    for(int i = 0; i<vi.size(); i++)
    {
        sum = sum +vi[i];
    }

    double mean = sum/vi.size();

    std::cout << "Mean  = " << mean <<std::endl;

}


int main()
{
    std::vector<int> vect;
    Integer(vect);
    median(vect);
    mean(vect);
    return 0;

}