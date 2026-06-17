#include <bits/stdc++.h>
using namespace std;
//tc: O(N)
//sc: O(1)
// iterate thru the loop take cost and subtract with mini with each array elements and then check max of cost and profit and update the max and then 
// checm mini and update it
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
