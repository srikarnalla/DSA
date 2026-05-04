#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &arr, int n) {
    if (n == 1) return;

    bool swapped = false;

    for (int i = 0; i < n-1; i++) {
        if (arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
            swapped = true;
        }
    }

    if (!swapped) return;

    bubble_sort(arr, n-1);
}

int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for (int i=0 ;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(arr,n-1);
    for (int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }


}
