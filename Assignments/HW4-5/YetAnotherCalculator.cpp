#include <iostream>
#include <string>
#include <stack>
#include <sstream>
using namespace std;

bool operation(const string& input);
void performOP(const string& input, stack<double>& calcstack);

int main()
{
	cout<<"Please input your inquary line by line if you want to finish please write DONE \n to perform subtraction use - \n to perform addition use + \n to perform multiplication use * \n to perform division use /"<<endl;
	
	stack<double>calcstack;
	string input;
	
	while(true)
	{
		cout<<">>";
		cin>>input;
		
		double num;
		if(istringstream(input)>>num)
		{
			calcstack.push(num);
		}
		else if(operation(input))
		{
			performOP(input, calcstack);
		}
		
		else if(input == "DONE")
		{
			return 0;
		}
	}
	
}

bool operation(const string& input)
{
	string op[] = {"-", "+", "*", "/"};
	
	for(int i=0; i<4; i++)
	{
		if(input == op[i])
		{
			return true;
		}
	}
return false;
 } 
 
 
 void performOP(const string& input, stack<double>& calcstack)
 {
 	double val1, val2, result;
 	
 	val2 = calcstack.top();
 	calcstack.pop();
 	val1 = calcstack.top();
 	calcstack.pop();
 	
 	if(input == "-")
 	{
 		result = val1-val2;
	}
	else if(input == "+")
	{
		result= val1+val2;
	}
 		else if(input == "*")
	{
		result= val1*val2;
	}
		else if(input == "/")
	{
		result= val1/val2;
	}
	
	cout<<result<<endl;
	calcstack.push(result);
 }
