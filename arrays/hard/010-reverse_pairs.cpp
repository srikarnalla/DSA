class Solution {
public:
    void merge(vector<int>& nums,int low,int mid, int high){
        int left = low, right = mid+1;
        vector<int> temp;
        while(left <= mid && right <= high){
            
            if (nums[left] <= nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }
        }
        while(left <= mid){
            temp.push_back(nums[left++]);
        }
        while(right <= high){
            temp.push_back(nums[right++]);
        }
        for (int i = low; i <= high; i++){
            nums[i] = temp[i-low];
        }

    }

    int cnt_pairs(vector<int>& nums,int low,int mid, int high){
        int left = low, right = mid+1;
        int cnt = 0;

        while(left <= mid && right <= high){
            
            if ((long long)nums[left] > 2LL * nums[right]){
                cnt += mid - left + 1;
                right++;
            }
            else{
                left++;
            }
        }
        while(left <= mid){
           left++;
        }
        while(right <= high){
            right++;
        }
        return cnt;

    }

    int merge_sort(vector<int>& nums, int low, int high){
        if (low >= high) return 0;
        int cnt = 0;
        int mid = (low + high) / 2;
        cnt += merge_sort(nums,low,mid);
        cnt += merge_sort(nums,mid+1,high);
        cnt += cnt_pairs(nums,low,mid,high);
        merge(nums,low,mid,high);
        return cnt;
    }

    int reversePairs(vector<int>& nums) {
        return merge_sort(nums, 0, nums.size() - 1);
    }
};  
