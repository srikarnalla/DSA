#include <bits/stdc++.h>
using namespace std;

vector<int> brute(vector<int> nums){
    int n = nums.size();
    vector<int> add;
    for (int i = 0; i < n; i++){
        bool leader = true;
        for (int j = i+1; j < n; j++){
            if (nums[i] < nums[j]){
                leader = false;
                break;
            }
        }
        if (leader == true){
            add.push_back(nums[i]);
        }
    }
    return add;
}

vector<int> optimal(vector<int> nums){
    int n = nums.size();
    vector<int> add;
    int l = INT_MIN;
    for (int i = n-1; i >= 0; i--){
        if (nums[i] > l){
            add.push_back(nums[i]);
            l = nums[i];
        }
    }
    return add;
}

int main(){
    vector<int> nums = {10,22,12,3,0,6};
    vector<int> temp = optimal(nums);
    for (auto it:temp){
        cout<<it<<" ";
    }
}
