#include <iostream>
using namespace std;
class Base {
   public:
  virtual  void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        cout << "Derived Function" << endl;
    }
};
int main()
{
Derived d;

Base* ptr = &d;
    ptr->print();

    return 0;
}


