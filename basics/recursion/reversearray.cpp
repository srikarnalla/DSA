#include <bits/stdc++.h>
using namespace std;

void revers(int i , int arr[] , int n){
    if (i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    revers(i+1,arr,n);
}

int main(){
    int A[9]={1,2,3,4,5,6,7,8,9};
    revers(0,A,9);
    for (int i=0;i<9;i++){
        cout<<A[i]<<" ";
    }

}