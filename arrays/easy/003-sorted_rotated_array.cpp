//Key_Insights :In a sorted array rotated any number of times, the number of positions where an element is greater than its next element (break points) is at most 1.
//This happens because rotation splits the original sorted array into two sorted subarrays and swaps their positions, while preserving the internal order within each subarray.
//TC:O(N)
//SC:O(1)

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++){
            // we use this because in a sorted array we check the last element with the first element hence we use modulo for nth elemnt in the array to become oth element.
            if (nums[i]>nums[(i+1)%n]){
                count++;
            }
        }
        return count <= 1;
    }
};
