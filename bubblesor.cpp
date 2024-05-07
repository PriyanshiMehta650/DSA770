#include <iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int ar[n];
for (int i=0;i<n;i++){
    cin>>ar[i];

}
for (int i=0;i<n;i++){
    cout<<ar[i];
}
int c =1;
while (c<n){
    for(int i =0;i<n-c;i++)
    {
        if(ar[i]>ar[i+1])
        {
            int temp = ar[i];
            ar[i]=ar[i+1];
            ar[i+1]=temp;
        }
    }
        c++;
}
for (int i=0;i<n;i++){
    cout<<ar[i];
}
}
