#include <iostream>
#include <string>
using namespace std;

bool lSearch(const string& str, char a, int in) {
    if (in >= str.length()) {
        return false;
    }
    if (str[in] == a) {
        return true;
    }
    return lSearch(str, a, in + 1);


   int main()
   {
    string str = "mainstream";
    char a ;
    cout<<"enter character";
    cin>>a;


    if (lSearch(str, a, 0)) {
        cout << "Found '" << a<< "' in the string." << endl;
    } else {
        cout << "Did not find '" << a << "' in the string." << endl;
    }

    return 0;
}
