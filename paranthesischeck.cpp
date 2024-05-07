#include <iostream>
using namespace std;

int main() {
    char expression[50];
    int x = 0, i = 0;
    cout << "\nEnter an expression: ";
    cin.getline(expression);
    while (expression[i] != '\0') {
        if (expression[i] == '(') {
            x++;
            
        } else if (expression[i] == ')') {
            x--;
            if (x < 0)
                break;
        }
        i++;
    }
    if (x == 0) {
        cout << "Expression is balanced";
    } else {
        cout << "Expression is unbalanced";
    }
    return 0;
}
