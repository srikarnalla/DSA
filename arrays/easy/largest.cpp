#include <bits/stdc++.h>
using namespace std;

//brute force method is sorting using quick_sort
// TC : O(Nlog(N))
// SC : O(1)
//and calling arr[n-1] since its the largest

//Optimal approach
//TC:O(N)
//SC:O(1)
int largest(int arr[], int n){
    int largest = arr[0];
    for (int i = 0; i < n; i++){
        if (arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<largest(arr,n);
    
}
