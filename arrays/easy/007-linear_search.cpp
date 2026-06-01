#include <bits/stdc++.h>
using namespace std;

int ls(int arr[], int n, int num){
    int index = -1;
    for (int i = 0; i < n; i++){
        if (arr[i] == num){
            return i;
        }
    }
    return index;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<ls(arr,n,0);
    
}
