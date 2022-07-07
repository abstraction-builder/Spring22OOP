#include <string>
#include <iostream>
#include <stack>


using namespace std;

float mathOperation(float op1, float op2, char operat)
{

    if(operat == '+') 
        return op1 + op2;
    else if(operat == '-')
        return op1 - op2;
    else if(operat == '*')
        return op1 *op2;
    else if(operat == '/')
        return op1/op2;
    else
        return 0;
}


float postfix_evaluate(string exp)
{
    stack<float> stk;

    for(int i = 0; i<exp.length(); i++)
    {
        if(isdigit(exp[i]))
            stk.push(exp[i]-'0');
        else 
        {
            float op2 = stk.top();
            stk.pop();

            float op1 = stk.top(); 
            stk.pop();

            float result = mathOperation(op1,op2,exp[i]);
            stk.push(result);

        }
    }

    return stk.top();
}
int main()
{
    string postfixExpression = "12+3*";

    cout<< postfix_evaluate(postfixExpression) << endl;

    return 0;
}