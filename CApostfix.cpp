#include<iostream>
using namespace std;
int isEmpty()
{
    return top == -1;
}
int isFull()
{
    return top == MAX - 1;
}

char peek()
{
    return stk[top];
}

char pop()
{
    if(isEmpty())
        return -1;

    char ch = stk[top];
    top--;
    return(ch);
}
void push(char oper)
{
    if(isFull())
        printf("Stack Full!!!!");

    else{
        top++;
        stk[top] = oper;
    }
}
void
