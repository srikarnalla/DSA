#include <bits/stdc++.h>
using namespace std;

vector<int> brute(vector<int> nums){
    int n = nums.size();
    vector<int> positive;
    vector<int> negative;
    for (int i = 0; i < n; i++){
        if (nums[i] > 0){
            positive.push_back(nums[i]);
        }
        else{
            negative.push_back(nums[i]);
        }
    }
    for (int i = 0; i < n/2; i++){
        nums[2*i] = positive[i];
        nums[2*i+1] = negative[i];
    }
    return nums;
}

vector<int> optimal(vector<int> nums){
    int n = nums.size();
    int nes = 1, pos = 0;
    vector<int> temp(n);
    for (int i = 0; i < n; i++){
        if (nums[i] < 0){
            temp[nes] = nums[i];
            nes = nes + 2;
        }
        else{
            temp[pos] = nums[i];
            pos = pos + 2;
        }
    }
    return temp;
}

vector<int> brute_variant_2(vector<int> nums){
    int n = nums.size();
    vector<int> nes, pos;
    for (int i  = 0; i < n; i++){
        if (nums[i] > 0){
            pos.push_back(nums[i]);
        }
        else {
            nes.push_back(nums[i]);
        }
    }
    int p = pos.size();
    int m = nes.size();
    if (p > m){
        for (int i = 0; i < m; i++){
            nums[2*i] = pos[i];
            nums[2*i+1] = nes[i];
        }
        for (int i = m; i < p; i++){
            nums[m+i] = pos[i];
        }
    }
    else{
        for (int i = 0; i < p; i++){
            nums[2*i] = pos[i];
            nums[2*i+1] = nes[i];
        }
        for (int i = p; i < m; i++){
            nums[p+i] = nes[i];
        }
    }
    return nums;
}

int main(){
    vector<int> nums = {3,1,-2,-5,2,-4,-8,-6};
    vector<int> temp = brute_variant_2(nums);
    for (auto it: temp){
        cout<<it<<" ";
    }
}
