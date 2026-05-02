
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i =0;i<n;i++){
        cin>>arr[i];
    }

    for (int i=0;i<=n-2;i++){
        int mini = i;
        for (int j = i;j<=n-1;j++){
            if (arr[j]<arr[mini]) mini = j;
        }
        int temp;
        temp = arr[i];
        arr[i]=arr[mini];
        arr[mini]=temp;
    } 

    for (int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
