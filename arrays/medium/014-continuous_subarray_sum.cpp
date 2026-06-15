class Solution {
public:
//tc: O(nlogn)
//sc:O(n)
// herr we are storing the remainders!
    bool checkSubarraySum(vector<int>& nums, int k) {
        int prefix_sum = 0;
        unordered_map<int,int> mpp;
        mpp[0] = -1;
        for (int i = 0; i < nums.size(); i++){
            prefix_sum += nums[i];
            int rem = prefix_sum % k;
            if (mpp.find(rem) != mpp.end()){
                if (i - mpp[rem] >= 2){
                    return true;
                }
            }
            else{
                mpp[rem] = i;
            }
        }
        return false;
    }
};
