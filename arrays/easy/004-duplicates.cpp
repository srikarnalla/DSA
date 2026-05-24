#include <bits/stdc++.h>
using namespace std;

// ki: we use two pointers method here we use i and j as those pointers and where i will be pointing the first element and then the j pointer using a loop and we check where the arr[i] != arr[j] 
// then if its not equal then we swap the arr[j] with arr[i+1](this moves the non duplicate to the front) and then we move the pointer to i+1 to check with the rest of the array again!
// we return i+1 because i is starting from 0 and we have to return all the non-duplicates.
// Time : O(N) 
//Space : O(1)
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
