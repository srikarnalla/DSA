#include <bits/stdc++.h>
using namespace std;

vector<int> brute(vector<int> nums){
    // this is the inbuilt function and how this works is the optimal method below!
    next_permutation(nums.begin(), nums.end());
    return nums;
}

vector<int> optimal(vector<int> nums){
    //tc:O(3N)
    //sc:O(1)
    // here we start from the last of the array and then check by chaning what number will change the array and this will be the point a[i] < a[i+1]
    // and this will be the index i and from index to the last we will swap index with the least greater integer and then from index to end we will reverse
    // the array to get the smallest array and we get the final permutation!
    int n = nums.size();
    int index = -1;
    for (int i = n-2; i >= 0; i--){
        if (nums[i] < nums[i+1]){
            index = i;
            break;
        }
    }
    if (index == -1){
        reverse(nums.begin(), nums.end());
    }
    for (int i = n-1; i >= index; i--){
        if (nums[i] > nums[index]){
            swap(nums[i], nums[index]);
            break;
        }
    }   
    reverse(nums.begin()+index+1, nums.end());
    return nums;
}

int main(){
    vector<int> nums = {2,1,5,4,3,0,0};
    vector<int> temp = optimal(nums);
    for (auto it: temp){
        cout<<it<<" ";
    }
}
