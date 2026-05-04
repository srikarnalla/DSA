#include <bits/stdc++.h>
using namespace std;

int func(vector <int> &arr, int low, int high){
    int pivot = low;
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<=arr[pivot] && i<=high - 1){
            i++;
        }
        while(arr[j]>arr[pivot] && j>=low - 1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}

void quick_sort(vector <int> &arr, int low, int high){
    if (low <= high){
        int part = func(arr, low, high);
        quick_sort(arr,low,part-1);
        quick_sort(arr,part+1,high);
    }
}

int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++){    
        cin>>arr[i];
    }
    quick_sort(arr,0,n-1);
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}
