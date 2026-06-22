   #include <bits/stdc++.h>
using namespace std;

int brute(vector<int> nums){
    int n = nums.size();
    int maxi = 0;
    for(int i = 0; i < n; i++){
        int cnt = 0, s = 0;
        for (int j = i; j < n; j++){
            s += nums[j];
            cnt++;
            if (s == 0){
                maxi = max(cnt,maxi);
            }
        }
    } 
    return maxi;
}

int optimal (vector<int> nums){
    int n = nums.size();
    int maxi = 0;
    int s = 0;
    unordered_map<int,int> mpp;
    mpp[0] = -1;    
    for(int i = 0; i < n; i++){
        s += nums[i];
        if (mpp.find(s) != mpp.end()){
            maxi = max(maxi,(i - mpp[s]));
        }
        else mpp[s] = i;
        
    } 
    return maxi;
}

int main(){
    vector<int> nums = {12,-2,2,-8,1,7,10,23};
    cout<<better(nums);
}
