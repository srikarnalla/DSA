#include <bits/stdc++.h>
using namespace std;

vector<int> brute(vector<int> nums){
    vector<int> ans;
    int cnt;
    for (int i = 0; i < nums.size();i++){
        if (anss.size() == 0 || ans[0] != nums[i]){
            cnt = 0;
            for (int j = 0; j < nums.size(); j++){
                if (nums[j] == nums[i]) cnt++
            }
            if (cnt > 2){
                ans.push_back(nums[i]);
            }
        }
        if (ans.size() == 2) break;
    }
}

vector<int> better(vector<int> nums){
    vector<int> ans;
    unordered_map<int,int> mpp;
    int mini = (nums.size() / 3) + 1;
    for (int i = 0; i < nums.size();i++){
        mpp[nums[i]]++;
        if (mpp[nums[i]] = mini){
            ans.push_back(nums[i]);
        }
        if (ans.size() == 2) break;
    }
}

vector<int> optimal(vector<int> nums){
    vector<int> ans;
    int mini = ((nums.size())/3) + 1;
    int ele1 = INT_MIN, ele2 = INT_MIN, cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < nums.size();i++){
        if (cnt1 == 0 && nums[i] != ele2){
            ele1 = nums[i];
            cnt1 = 1;
        }
        else if (cnt2 == 0 && nums[i] != ele1){
            ele2 = nums[i];
            cnt2 = 1;
        }
        else if (ele1 == nums[i]){
            cnt1++;
        }
        else if (ele2 == nums[i]){
            cnt2++;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }
    cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < nums.size(); i++){
        if (nums[i] == ele1){
            cnt1++;
        }
        if (nums[i] == ele2){
            cnt2++;
        }
    }
    if (cnt1 == mini){
        ans.push_back(ele1);
    }
    if(cnt2 == mini){
        ans.push_back(ele2);
    }
    return ans;
}

int main(){

}
