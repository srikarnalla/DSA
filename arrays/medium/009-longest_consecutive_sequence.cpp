#include <bits/stdc++.h>
using namespace std;

bool ls(vector<int> nums , int x){
    for (int i = 0; i < nums.size(); i++){
        if (nums[i] == x) return true;
    }
    return false;
}
// tc: O(n2)
// sc: O(1)
// iterate thru every element and check
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

// tc: O(n + nlogn)
//sc:(n) because we are changing the given array
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

//tc:O(3n)
//sc:O(1)
// first store every element in the set and then iterate in the set make an elemtn as start and if there doesnt exist any element before start then iterat thru the set and check
// if the next elemeent exist if exist cnt++
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
