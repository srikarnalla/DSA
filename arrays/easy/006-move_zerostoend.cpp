class Solution {
//ki: pick non zeros and store in another array 
//TC:O(2n)
//SC:O(n)
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
//two pointer approach, finding the first zero in the array and storing that index and then running a loop from that index to the rest of the array checking for 
//non zeros and swapping with the index!
//TC: O(N)
//SC:O(1)
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
