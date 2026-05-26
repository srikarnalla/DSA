#include <bits/stdc++.h>
using namespace std;

int brute_better(vector<int> nums){
    int n = nums.size();
    long long s = INT_MIN;
    long long maxi = 0;
    for (int i = 0; i < n; i++){
        s = 0;
        for (int j = i; j < n; j++){
            s += nums[j];
            maxi = max(maxi,s);
        }
    }
    return maxi;
}

int optimal(vector<int> nums){
    int n = nums.size();
    long long maxi = INT_MIN;
    long long s = 0;
    for (int i = 0; i < n; i++){
        s += nums[i];
        if (s > maxi){
            maxi = s;
        }
        if (s < 0){
            s = 0;
        }
    }
    return maxi;
}

vector<int> optimal_returnarray(vector<int> nums){
    int n = nums.size();
    int maxi = INT_MIN;
    int s = 0;
    int start = 0;
    int ansStart = -1, ansEnd = -1;
    for (int i = 0; i < n; i++){
        if (s == 0) start = i;
        s += nums[i];
        if (s > maxi){
            maxi = s;
            ansStart = start;
            ansEnd = i;
        }
        if (s < 0){
            s = 0; 
        }
    }
    vector<int> result;
    for (int i = ansStart; i <= ansEnd; i++) {
        result.push_back(nums[i]);
    }

    return result;
}

int main(){
    vector<int> nums = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout<<optimal(nums)<<endl;
    vector <int> temp = optimal_returnarray(nums);
    for (auto it : temp){
        cout<<it<<" ";
    }
}
