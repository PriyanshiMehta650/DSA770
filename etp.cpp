#include <iostream>
using namespace std;

class student
{
public:
    int marks1[5];
    int marks2[5];
};

class performance : public student
{
public:
    void calc(int m, int n)
    {
        int p = 0;

        marks1[p] = m;
        marks2[p] = n;

        int total = marks1[p] + marks2[p];
        cout<<total<<endl;
        p++;


    }

};

int main()
{
    performance p;
    int m[] = {20, 30, 40};
    int n[] = {50, 40, 20};
    for (int i = 0; i < 3; i++)
    {
        cout<<"roll no " <<i<<" marks";
        p.calc(m[i], n[i]);
    }

    return 0;
}
