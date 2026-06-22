#include <bits/stdc++.h>
using namespace std;

int brute(vector<int> nums, int k){
    int n = nums.size();
    int cnt = 0;
    for (int i = 0; i < n; i++){
        int s = 0;
        for (int j = i; j < n; j++){
            s ^= nums[j];
            if (s == k) cnt++;
        }
    }
    return cnt;
}

int optimal(vector<int> nums, int k){
    int n = nums.size();
    unordered_map<int,int> mpp;
    int prefix_sum = 0;
    int cnt = 0;
    mpp[0] = 1;
    for (int i = 0; i < n; i++){
        prefix_sum ^= nums[i];
        int findu = prefix_sum ^ k;
        if (mpp.find(findu) != mpp.end()) cnt += mpp[findu];
        mpp[prefix_sum]++;
    }
    return cnt;
}

int main(){
    vector<int> nums = {4, 2, 2, 6, 4};
    cout<<optimal(nums,6);
}
