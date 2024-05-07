#include <iostream>
#include <cstring>
#define MAX 20

struct stack
{
    char stk[MAX];
    int top;
}s;

void push(char item)
{
    if (s.top == (MAX - 1))
        std::cout << "Stack is Full\n";
    else
    {
        s.top = s.top + 1;
        s.stk[s.top] = item;
    }
}

void pop()
{
    if (s.top == - 1)
    {
        std::cout << "Stack is Empty\n";
    }
    else
    {
        s.top = s.top - 1;
    }
}

int main()
{
    char exp[MAX];
    int i = 0;
    s.top = -1;
    std::cout << "\nINPUT THE EXPRESSION : ";
    std::cin >> exp;
    for(i = 0;i < strlen(exp);i++)
    {
        if(exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
            push(exp[i]);
            continue;
        }
        else if(exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
        {
            if(exp[i] == ')')
            {
                if(s.stk[s.top] == '(')
                {
                    pop();
                }
                else
                {
                    std::cout << "\nUNBALANCED EXPRESSION\n";
                    break;
                }
            }
            if(exp[i] == ']')
            {
                if(s.stk[s.top] == '[')
                {
                    pop();
                }
                else
                {
                    std::cout << "\nUNBALANCED EXPRESSION\n";
                    break;
                }
            }
            if(exp[i] == '}')
            {
                if(s.stk[s.top] == '{')
                {
                    pop();
                }
                else
                {
                    std::cout << "\nUNBALANCED EXPRESSION\n";
                    break;
                }
            }
        }
    }
    if(s.top == -1)
    {
        std::cout << "\nBALANCED EXPRESSION\n";
    }
    else{

         std::cout << "\n UNBALANCED EXPRESSION\n";
    }

}
