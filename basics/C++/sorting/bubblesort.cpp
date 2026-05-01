#include <bits/stdc++.h>
using namespace std;

void bubb_sort(int n , int arr[]){
    int did_swap=0;
    for (int i = n-1;i>=0;i--){
        for (int j = 0 ; j<=i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                did_swap = 1;
            }
        }
        if (did_swap == 0){
            break;
        }
    }
}

int main(){ 
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0;i<n;i++){
        cin>>arr[i];
    }

    bubb_sort(n,arr);

    for (int i =0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}