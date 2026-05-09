class Solution {
//bruteforce
public:
    void moveZeroes(vector<int>& nums) {
    vector <int> temp;
    int n = nums.size();
    for (int i = 0; i < n; i++){
        if (nums[i]!= 0){
            temp.push_back(nums[i]);
        }
    }
        
    int m = temp.size();
    for (int i = 0; i < n; i++){
        if (i<m){
            nums[i] = temp[i];
        }
        else{
            nums[i]=0;
        }    
    }
    }
};

//optimal method
void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int j = -1;
    for (int i = 0; i < n; i++){
        if (nums[i] == 0){
            j = i;
            break;
        }
    }
    if (j == -1) return;
    for (int i = j+1; i < n; i++){
        if (nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
    }
    }
