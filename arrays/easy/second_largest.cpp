#include <bits/stdc++.h>
using namespace std;

//retrun -1 if the array size is 0 or 1

//brute force method is sorting the array and calling
//the second largest element that is not equal to the 
//the largest elemtent hence we check and print arr[i]
//TC: O(N+Nlog(N))
//SC: O(1)
int sLargest_bruteforce(int arr[], int n){
    if (n == 0 || n == 1) return -1;
    sort(arr, arr+n);
    int sLargest = INT_MIN;
    for (int i = n-2; i > 0; i--){
        if (slargest != arr[n]){
            slargest = arr[i];
            break;
        }  
    }
    return sLargest;
}

//Key_Insight : use a loop to check for the largest and then use a loop for checking the slargest
// the slargest loop can end at 1 step only if the arr[n-2] is the slargest (TC:O(1)) and  if the slargest is arr[0] it will take TC: O(N)
//TC: O(2N
//SC: O(1)

int sLargest_better(int arr[], int n){
    if (n == 0 || n == 1) return -1;
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

//Key_insights : in a single loop update for the largest and the sLargest and in the else if loop check for the slargest element that is not equal to the largest element.
//TC:O(N)
//SC:(1)
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
