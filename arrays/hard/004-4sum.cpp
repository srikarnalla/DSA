#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> brute(vector<int> nums, int target){
    int n = nums.size();
    set<vector<int>> st;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            for(int k = j+1; k < n; k++){
                for (int l = k+1; l < n; l++){
                    long long s = nums[i] + nums[j];
                    //dng this so as to  not exceed the integer limit!
                    //because we are typecasting nums[i] + nums[j] we do s += as to not fail the typecasting
                    s += nums[k];
                    s += nums[l];
                    if (s == target){
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end);
    return ans;
}

vector<vector<int>> better(vector<int> nums, int target){
    int n = nums.size();
    set<vector<int>> st;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            set<long long> hashst;
            for(int k = j+1; k < n; k++){
                long long s = (nums[i] + nums[j]);
                s += nums[k];
                long long l = target - s;
                if (hashst.find(l) != hashst.end()){
                    vector<int> temp = {nums[i], nums[j], nums[k], l};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                }
            hashst.insert(nums[k]);
            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end);
    return ans;
}

vector<vector<int>> optimal(vector<int> nums, int target){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++){
        if (i > 0 && nums[i] == nums[i-1]) continue;
        for (int j = i+1; j < n; j++){
            if(j != i+1 && nums[j] == nums[j-1]) continue;
            int k = j+1;
            int l = n-1;
            while(k<l){
                long long s = nums[i] + nums[j];
                s += nums[k];
                s += nums[l];
                if (s == target){
                    ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                    k++;
                    l--;
                    while(k < l && nums[k] == nums[k-1]) k++;
                    while(k < l && nums[l] == nums[l+1]) k--;
                }
                else if (s > target) l--;
                else k++;

            }
        }
    }
    return ans;
}
