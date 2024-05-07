#include<bits/stdc++.h>
using namespace std;


int partition(int low, int high, vector<int>& arr){

    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j] > pivot && j>=low+1){
            j--;
        }

        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(int low, int high, vector<int>& arr){
    if(low<high){
        int pIndex = partition(low, high, arr);
        qs(low,pIndex-1, arr );
        qs(pIndex+1,high, arr);
    }
}

vector<int> quickSort(vector<int>& arr){

    qs(0, arr.size() -1, arr);
    return arr;
}

int main(){
    vector<int> arr = {4,3,5,2,9,1,8};

    arr = quickSort(arr);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }


}
