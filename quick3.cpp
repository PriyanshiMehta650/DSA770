#include<iostream>
using namespace std;


int swap(int& a,int& b)
{
    int temp =a;
           int a= b;
           int b=temp;
}
int quicksort(int arr[] ,int low,int high)
{
    if(low<high)
    {
        int p= part(arr,low,high)

        quicksort(arr,low,p-1);
        quicksort(arr,p+1,high);
    }
}
int part(int arr[],int low,int high)
{
    int piv =arr[0];
    int i =arr[0];
    int j = high ;
    if(i<j)
    {
       while(arr[i]<=piv && i<=high-1){
            i++;

        }
        while(arr[j]>piv &&i>=low+1){
            j++;
            }
       if(i<j)
       {
           swap(arr[i],arr[j])
       }
    }
    swap(arr[low],arr[high)
}





int main()
{
int n;

cin>>n;
int arr[n];
for(int i =0;i<n;i++)
{
cin>> arr[i];
}
for(int i =0;i<n;i++)
{
cout<< arr[i];
}

quicksort(arr,0,n-1)
cout<<"after sorting";
for(int i =0;i<n;i++)
{
cout<< arr[i];
}

}


