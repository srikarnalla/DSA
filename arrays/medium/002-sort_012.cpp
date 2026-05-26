#include <bits/stdc++.h>
using namespace std;

//ki: just use sprting like merge sort 
//tc: O(NlogN)
//sc:O(1) or O(N) cause we sorted the array
vector<int> brute(vector<int> nums){
    int n = nums.size();
    sort(nums.begin(), nums.end());
    return nums;
}

//ki: count all the 0 1 and 2 then run three loops to add those numbers into the original array
//tc: O(2N)
//sc:O(1)
vector<int> better(vector<int> nums){
    int cnt = 0;
    int n = nums.size();
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for (int i  = 0; i < n; i++){
        if (nums[i] == 0) cnt0++;
        else if (nums[i] == 1) cnt1++;
        else if (nums[i] == 2) cnt2++;
    }
    for (int i  = 0; i < cnt0; i++){
        nums[i] = 0;
    }
    for (int i  = cnt0; i < cnt0+cnt1; i++){
        nums[i] = 1;
        }
    for (int i  = cnt0+cnt1; i < cnt0+cnt1+cnt2; i++){
        nums[i] = 2;
    }
    return nums;
}

//ki: Dutch national flag algorithm 
// uses three pointers low mid and high where o to low-1 is zeros and low to mid-1 are 1 , mid to high is the unsorted part of the array and then high+1 to n-1 is the 2's\
// if arr[mid] is 0 then we swap mid with low and increment low and mid
// if arr[mid] is 1 then we just increment mid++
// if arr[mid] is 2 then we seap mid with high and decrease high--;
//tc: O(N)
//sc:O(1)
vector<int> optimal(vector<int> nums){
    int cnt = 0;
    int n = nums.size(); 
    int low = 0, mid = 0, high = n-1;
    for (int i  = 0; i < n; i++){
        if (nums[mid] == 0){
            swap(nums[low], nums[mid]);
            low++;
            mid++;
            cnt++;
        }
        else if (nums[mid]==1){
            mid++;
            cnt++;
        }
        else{
            swap(nums[mid], nums[high]);
            high--;
            cnt++;
        }
    }
    cout<<cnt<<" "<<endl;
    return nums;
}

int main(){
    vector<int> nums = {0, 1, 2, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    vector<int> sorts = optimal(nums);
    for (auto it:sorts){
        cout<<it<<" ";
    }
}
