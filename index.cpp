#include<iostream>
using namespace std;
// namespace name

void main()
{
    int a[100];
    int i,n,x,pos;
    do
    { 
        cout<<"Enter the number of elements in the array\n";
      cin>>n;
    
    } while (n<=0 || n<=100);
    
   
   
    cout<<"enter elements";
    for(i = 0;i<n;i++)
    {
       cin>>a[i]; 
    }
    cout<<"enter new element and itspos";
    cout<<"position should be less than "<<n;
    cin>>pos>>x;
    n=n+1;
    for(i=n-1;i>=pos;i--)
    a[i] =a[i-1]
    a[pos-1]=x;
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    sched_getscheduler]


}