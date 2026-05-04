#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n){
    if (n == 1) return;
    insertion_sort(arr, n-1);
    int j = n;
    while (j > 0 && arr[j-1]>arr[j]){
        swap(arr[j],arr[j-1]);
        j--;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    insertion_sort(arr,n);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}
