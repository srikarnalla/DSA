#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> brute(vector<int> nums){
    int n = nums.size();
    vector<vector<int>> ans;
    set<vector<int>> st;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            for (int k = j+1; k < n; k++){
                if (nums[i] + nums[j] + nums[k] == 0){
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}

vector<vector<int>> better(vector<int> nums){
    int n = nums.size();
    set<vector<int>> st;
    for (int i = 0; i < n; i++){
        set<int> hashst;
        for (int j = i+1; j < n; j++){   
            if (hashst.find(-1*(nums[i]+nums[j])) != hashst.end()){
                vector<int> temp = {nums[i],nums[j],-1*(nums[i] + nums[j])};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            hashst.insert[nums[j]];
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}

vector<vector<int>> optimal(vector<int> nums){
    int n =nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++){
        if ( i> o && nums[i] == nums[i-1]) continue;
        int j = i+1, k = n-1;
        while (j < k){
            int s = nums[i] + nums[j] + nums[k];
            if (s == 0){
                ans.push_back(nums[i] , nums[j] , nums[k]);
                j++;
                k--;
                while(j <= k && nums[j-1] == nums[j]) j++;

                while(j<= k && nums[k+1] == nums[k]) k--;
            } 
            else if (s > 0 ) j++;
            else k--;
        }
    }
    return ans;
}

