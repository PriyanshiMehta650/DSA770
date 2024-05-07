#include<iostream>
using namespace std;
int binarysearch(int ar[],int x ,int st ,int ed);{
if(ed>=st){
    int mid = st + (ed- st)/2;
    if(ar[mid] == x)
    return mid;
    if (ar[mid] > x)
return binarySearch(ar, x, st, mid - 1);

// Search the right half
return binarySearch(ar, x, mid + 1, ed);
}
return -1
}



int main()
{
    int ar[10],start,mid,end,n,a ,i;
    cout<<"enter elements number ";
    cin>>n;
    for(i =0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter element that need to be checked";
    cin>>a;

    int result = binarysearch(ar,a,0,n-1);
    if(result==-1)
    {
        cout<<"notfound";
    }
    else 
    cout<<"found at "<<result;
}