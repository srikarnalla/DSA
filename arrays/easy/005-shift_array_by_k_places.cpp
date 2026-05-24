#include <bits/stdc++.h>
using namespace std;

//store the first k elements in an temporary array and then shift the elements after k to n into the new positions and then finally insert the temp array into the array!
//TC: O(d+n-d+d) = O(n+d)
//SC: O(d)
vector <int> brutem(vector<int> arr, int k){
  int n = arr.size();
  vector<int> temp(k);
  for (int i  = 0; i < k; i++){
    temp[i] = arr[i];
  }
  for (int i = d; i < n; i++){
    arr[i-d] = arr[i];
  }
  for (int i = n-d; i < n; i++){
    arr[i] = temp[i-(n-d)];
  }
return arr;
}

//ki: here we are reversing the whole array and breaking the array into subarrays of 0 - k-1 to k - n-1
//and then rotating these borken subarrays to acheive the final sifted array by k units!
//TC:O(2N)
//SC:O(1)
void reverse(vector<int> &arr,int i, int j){
  while(i < j){
    swap(arr[i],arr[j]);
    i++;
    j--;
  }
}

vector<int> optimal(vector<int> &arr, int k){
  int n = arr.size();
  k = k % n;
  reverse(arr,0,n-1);
  reverse(arr,0,k-1);
  reverse(arr,k,n-1);
  return arr;
}
