#include <bits/stdc++.h>
using namespace std;

//ki: use two loops to see which element is occuring the greates
//tc:O(N2)
//sc:O(1)
int brute(vector<int> nums){
    int n = nums.size();
    for (int i = 0; i < n; i++){
        int cnt = 0;
        for (int j  = 0; j < n; j++){
            if (nums[j] == nums[i]){
                cnt++;
            }
        }
        if (cnt > n / 2) return nums[i];    
    }
    return -1;
}


//ki: use hashing 
//tc:O(N + NlogN)
//sc:O(N)
int better(vector<int> nums){
    int n = nums.size();
    map<int,int> mpp;
    for (int i = 0; i < n; i++){
        mpp[nums[i]]++;
    }
    for (auto it:mpp){
        if (it.second > n/2){
            return it.first;
        }
    }
    return -1;
}


//ki: moores voting algortihm
// find the element by using moores process and then use a loop to check if the found element is the greates occuring if it is not then no element is having majority 
//tc:O(N)
//sc:O(1)
int optimal(vector<int> nums){
    int n = nums.size();
    int cnt = 0, ele;
    for (int i  = 0; i < n; i++){
        if (cnt == 0){
            cnt = 1;
            ele = nums[i];
        }
        else if (ele == nums[i]){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1 = 0;
    for (int i = 0; i < n; i++){
        if (nums[i] == ele) cnt1++;
    }
    if (cnt1 > n / 2) return ele;
    return -1;
}

int main(){
    vector <int> nums = {7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    cout<<optimal(nums);
}
