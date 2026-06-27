#include <bits/stdc++.h>
using namespace std;

int brute(vector<int> nums){
  int n = nums.size();
  if (n <= 1) return nums[0];

  int fin = 1;
  
  for (int i  = 0; i < n; i++){
    int cnt = 1;
    for (int j = i; j < n; j++){
      cnt *= nums[i];
      fin = max(fin,cnt);
    }
  }
  if (fin <= 0) return 0;
  return fin;
}

int optimal(vector<int> nums){
  int n = nums.size();
  int prefix = 1, sufix = 1;
  int fin = 1;
  for (int i = 0; i < n; i++){
    if (prefix == 0) prefix = 1;
    if (sufix == 0) sufix = 1;
    prefix *= nums[i];
    sufix *= nums[n-i-1];
    fin = max(fin,max(prefix,sufic));
  }
  return fin;
}
  
