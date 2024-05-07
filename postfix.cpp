#include <stdio.h>
#include <stdlib.h>
#define msize 100

int stack[msize];
int top = -1;
void push(int item) {
    if (top >= msize - 1) {
printf("Stack Overflow\n");
        return;
    }
    stack[top++] = item;
}
int pop() {
    if (top < 0) {
printf("Stack Underflow\n");
        return -1;
    }
    int item = stack[--top];
    return item;

}
int is_operator(char symbol) {
    if (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/') {
        return 1;
    }
    return 0;
}
int eval(char* exp) {
    int i = 0;
    char symbol = exp[i];
    int operand1, operand2, result;

    while (symbol != '\0')
    {
        if (symbol >= '0' && symbol <= '9')
        {
            int num = symbol - '0';
            push(num);
        }
        else if (is_operator(symbol))
        {
            operand2 = pop();
            operand1 = pop();
            switch(symbol)
            {
                case '+': result = operand1 + operand2; break;
                case '-': result = operand1 - operand2; break;
                case '*': result = operand1 * operand2; break;
                case '/': result = operand1 / operand2; break;
            }
            push(result);
        }
        symbol = exp[i++];
    }
    result = pop();
    return result;
}

int main() {
    /* driver code  a+b == ab+ */


    char exp[msize];
    scanf("%d",exp);
    int result = eval(exp);
printf("postfix order implementation Result= %d\n", result);
return 0;
}








