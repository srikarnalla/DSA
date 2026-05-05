#include <bits/stdc++.h>
using namespace std;

//brute force method is sorting the array and calling
//the second largest element that is not equal to the 
//the largest elemtent hence we see and print arr[i]

int sLargest_better(int arr[], int n){
    int largest = arr[0];
    int sLargest = INT_MIN;
    for (int i = 0; i < n; i++){
        if (arr[i]>largest){
            largest = arr[i];
        }
    }
    for (int i = 0; i < n; i++){
        if (arr[i]>sLargest && arr[i]!= largest){
            sLargest = arr[i];
        }
    }
    return sLargest;
}

int sLargest_optimal(int arr[], int n){
    int largest = arr[0];
    int sLargest = INT_MIN;
    for (int i = 0; i < n; i++){
        if (arr[i] > largest){
            sLargest = largest;
            largest = arr[i];
            
        }
        else if(arr[i] < largest && arr[i]>sLargest){
            sLargest = arr[i];
        }
    }
    return sLargest;
}

int sSmallest_optimal(int arr[], int n){
    int smallest = arr[0];
    int sSmallest = INT_MAX;
    for (int i = 0; i < n; i++){
        if (arr[i] < smallest){
            sSmallest = smallest;
            smallest = arr[i];
            
        }
        else if(arr[i] > smallest && arr[i]<sSmallest){
            sSmallest = arr[i];
        }
    }
    return sSmallest;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<sLargest_better(arr,n)<<endl;
    cout<<sLargest_optimal(arr,n)<<endl;
    cout<<sSmallest_optimal(arr,n);
    
}
