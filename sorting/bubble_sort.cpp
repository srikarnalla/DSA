#include <bits/stdc++.h>
using namespace std;

void bubble(int arr[], int n){
    int didSwap = 0;
    for (int i = n-1;i>=1;i--){
        for (int j = 0; j<=i-1; j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0) break;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i =0;i<n;i++){
        cin>>arr[i];
    }
/*
    for (int i = 0;i<=n-1;i++){
        for (int j =0;j<=n-i-2;j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
*/
    bubble(arr,n);
    for (int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}
