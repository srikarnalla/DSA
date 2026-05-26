#include <bits/stdc++.h>
using namespace std;

int func(vector<int> nums){
    int n = nums.size();
    int profit = 0;
    int mini = nums[0];
    for (int i = 1; i < n; i++){
        int cost = nums[i] - mini;
        profit = max(profit,cost);
        mini = min(mini,nums[i]);
    }
    return profit;
}

int main(){
    vector<int> nums = {7, 1, 5, 3, 6, 4};
    cout<<func(nums);
}
