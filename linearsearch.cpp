using namespace std;
#include <iostream>
int main() {

int a[11] = {1, 2, 3, 4, 5, 34, 23, 12, 56, 65};
int x = 23, f = 0;
for(int i = 0; i < 10; i++) {
    if (a[i] == x) {
        cout << "Index of " << x << " is: " << i << endl;
        f = 1;
        break;
    }
}

if(f == 0)
{cout << "Element not found" << endl;
}
return 0;
}
