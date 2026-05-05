#include <bits/stdc++.h>
using namespace std;

int duplicates(int arr[], int n){
    int i =0;
    for (int j = 1; j < n; j++){
        if (arr[j]!= arr[i]){
            arr[i+1]= arr[j];
            i++;
        }
    }
    return i+1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<duplicates(arr,n);
}

/* int cnt = 0;
    int left = 0;
    int right = 1;
    for (int i = 0; i < n; i++) {
        if (arr[left] == arr[right]){
            right++;
        }
        else{
            arr[left+1] = arr[right];
            left++;
            right++;
            cnt++;
        }
    }*/
