#include <bits/stdc++.h>
using namespace std;

int missing_number(int arr[], int n){
    for (int i = 1; i <= n; i++){
        int flag = 0;
        for (int j = 0; j < n; j++){
            if (arr[j] == i){
                flag = 1;
                break;
            }
        }
        if (flag == 0){
        return i;
        }
    }
}

int missing_number1(int arr[], int n){
    int hash[n+1];
    for (int i = 0; i < n; i++){
        hash[arr[i]]++;
    }

    for (int i = 1; i < n; i++){
        if (hash[i] == 0){
            return i;
        }
    }
}


int main(){
    int n = 4;
    int arr[n] = {1, 2, 4, 5};
    cout<<missing_number2(arr,n);
}
