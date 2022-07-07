#include <string>
#include <iostream>
#include <stack>


float Operation(float n1, float n2, char x)
{

    if(x == '+') 
      
        return n1 + n2;
    else if(x == '/')
        return n1/n2;
    else if(x == '-')
        return n1 - n2;
    else if(x == '*')
        return n1 *n2;
    else
        return 0;
}


float postfix_evaluate(std::string str)
{
   std:: stack<float> stk;

    for(int i = 0; i<str.length(); i++)
    {
        if(isdigit(str[i]))
            stk.push(str[i]-'0');
        else 
        {
            float n2 = stk.top();
            stk.pop();

            float n1 = stk.top(); 
            stk.pop();

            float result = Operation(n1,n2,str[i]);
            stk.push(result);

        }
    }

    return stk.top();
}
int main()
{
    std::string postfixExpression = "12+3*";

    std::cout<< postfix_evaluate(postfixExpression) << std::endl;

    return 0;
}