#include <bits/stdc++.h>
using namespace std;

void brute(vector<int> nums){sort(nums.begin(),nums.end());
    int n = nums.size();
    int missing = -1, repeating = -1;unordered_map<int,int> mpp;
    for (int i = 1; i <= n; i++){
        int cnt = 0;
        for (int j = 0; j < n; j++){
            if (nums[j] == i) cnt++;
        }
        if (cnt == 0) missing = i;
        else if (cnt == 2) repeating = i;
        if (missing != -1 && repeating != -1) break;
    }
    cout<<"missing is "<<missing<<" and repeating is "<<repeating<<endl;
}

void better_map(vector<int> nums){sort(nums.begin(),nums.end());
    int n = nums.size();
    int missing = -1, repeating = -1;
    unordered_map<int,int> mpp;
    for (int i = 0; i < n; i++){
        mpp[nums[i]]++;
    }
    for (int i = 1; i <= n; i++){
        //if element doesnt exist no error only checks
        if (mpp[i] == 0){
            missing = i;
        }
        if (mpp[i] == 2){
            repeating = i;
        }
    }
    cout<<"missing is "<<missing<<" and repeating is "<<repeating<<endl;
}

void better_arr(vector<int> nums){sort(nums.begin(),nums.end());
    int n = nums.size();
    int missing = -1, repeating = -1;
    vector<int> hasharr(n+1);
    for (int i = 0; i < n; i++){
        hasharr[nums[i]]++;
    }
    for (int i = 1; i <= n; i++){
        if (hasharr[i] == 0){
            missing = i;
        }
        if (hasharr[i] == 2){
            repeating = i;
        }
    }
    cout<<"missing is "<<missing<<" and repeating is "<<repeating<<endl;
}

void optimal1(vector<int> nums){
    long long n = nums.size();
    long long s1 = 0, sn = n*(n+1)/2, s2 = 0, s2n = n*(n+1)*(2*n+1)/6;
    long long  x = 0, y = 0;
    for (int i = 0; i < n; i++){
        s1 += nums[i];
        s2 += (long long)nums[i]*(long long)nums[i];
    }
    long long sub1  = s1 - sn;
    long long sum1 = (s2 - s2n)/(sub1);

    x = ((sub1) + (sum1))/2;
    y = ((sum1) - (sub1))/2;
    cout<<x<<" "<<y;
}

vector<int> optimal2(vector<int> nums){
    int n = nums.size();
    int xr = 0;
    for (int i = 0; i < n; i++){
        xr = xr ^ nums[i];
        xr = xr ^ i+1;
    }
    int bitno = 0;
    while(1){
        if ((xr & (1<<bitno)) != 0){
            break;
        }
        bitno++;
    }

    int zero = 0, one = 0;
    for (int i = 0; i < n; i++){
        if ((nums[i] & (1<<bitno)) != 0){
            one ^= nums[i];
        } 
        else{
            zero ^= nums[i];
        } 

        if ((i+1 & (1<<bitno)) != 0){
            one ^= i+1;
        }
        else{
            zero ^= i+1;
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++){
        if (nums[i] == zero){
            cnt++;
        }
    }
    cout<<one<<" "<<zero;
    if (cnt == 2) return {one,zero};
    return {zero,one};
}

int main(){
    vector<int> nums = {1,1,2,3,5,6};
    vector<int> temp = optimal2(nums);
    for (int i = 0; i < temp.size(); i++){
        temp[i];
    }
}
