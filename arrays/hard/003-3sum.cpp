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

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());

        vector<vector<int>> ans;

        for (int i = 0; i < n; i++) {

            if (i > 0 && arr[i] == arr[i - 1]) continue;

            if (arr[i] > 0) break;

            int left = i + 1;
            int right = n - 1;

            while (left < right) {

                long long sum = (long long)arr[i] + arr[left] + arr[right];

                if (sum == 0) {

                    ans.push_back({arr[i], arr[left], arr[right]});

                    left++;
                    right--;

                    while (left < right && arr[left] == arr[left - 1])
                        left++;

                    while (left < right && arr[right] == arr[right + 1])
                        right--;
                }
                else if (sum < 0) {
                left++;
                }
                else {
                    right--;
                }
            }
        }
    return ans;
    }
};
