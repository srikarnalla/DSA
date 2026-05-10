int max_zeros(vector<int> nums){
int maxs = 0;
int cnt = 0;
  for (int i = 0; i < nums.size(); i++){
    if (nums[i] == 1){
      cnt++;
    }
    else{
      cnt = 0;
    }
    maxs = max(cnt,maxs);
  }
  return maxs;
}
