#include <bits/stdc++.h>
using namespace std;

bool ls(vector<int> nums , int x){
    for (int i = 0; i < nums.size(); i++){
        if (nums[i] == x) return true;
    }
    return false;
}
int brute(vector<int> nums){
    int n = nums.size();
    int cnt = 0;
    for (int i = 0; i < n; i++){
        int x = nums[i];
        cnt = 1;
        while (ls(nums,x+1) == true){
            x = x + 1;
            cnt++;
        }
    }
    return cnt;
}

int better(vector<int> nums){
    int n = nums.size();
    int cntCur = 0, leasSmaller = INT_MIN, longest = 1;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++){
        if (nums[i] - 1 == leasSmaller){
            cntCur++;
            leasSmaller = nums[i];
        }
        else if (nums[i] != leasSmaller){
            cntCur = 1;
            leasSmaller = nums[i];
        }
        longest = max(longest , cntCur);
    }
    return longest;
}

int optimal(vector<int> nums){
    int n = nums.size();
    int longest = 1;
    set<int> st;
    for (int i  = 0; i < n; i++){
        st.insert(nums[i]);
    }
    for (auto it:st){
        if (st.find(it-1) == st.end()){
            int cnt = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                x++;
                cnt++;
            }
            longest = max(longest,cnt);
        }
    }
    return longest;
}

int main(){
    vector<int> nums = {102,4,100,1,101,3,2,1,1};
    cout<<optimal(nums);
}
