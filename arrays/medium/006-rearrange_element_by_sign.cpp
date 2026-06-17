#include <bits/stdc++.h>
using namespace std;

vector<int> brute(vector<int> nums){
    // tc:O(2N)
    // sc:O(N)
    // divide and conquer rule here make two vectors where one contains the positives and the other contains the negatives and then add them back into the 
    // original array!
    int n = nums.size();
    vector<int> positive;
    vector<int> negative;
    for (int i = 0; i < n; i++){
        if (nums[i] > 0){
            positive.push_back(nums[i]);
        }
        else{
            negative.push_back(nums[i]);
        }
    }
    for (int i = 0; i < n/2; i++){
        nums[2*i] = positive[i];
        nums[2*i+1] = negative[i];
    }
    return nums;
}

vector<int> optimal(vector<int> nums){
    //tc:O(N)
    //sc:O(N)
    // here make a temp vector and then if the element is negative add it in the odd place of the temp array and similarly if the element is positive add 
    // it in the even position and then move the indices by 2 steps to again go to the next even and odd indices!
    int n = nums.size();
    int nes = 1, pos = 0;
    vector<int> temp(n);
    for (int i = 0; i < n; i++){
        if (nums[i] < 0){
            temp[nes] = nums[i];
            nes = nes + 2;
        }
        else{
            temp[pos] = nums[i];
            pos = pos + 2;
        }
    }
    return temp;
}

// we use this only when there are more number of positives than negatives or more negatives than positives.
vector<int> brute_variant_2(vector<int> nums){
    // there are N elements and say m are max of positivies and negatives, and then n as the leftover where m+n = N
    // tc: O(N + m + n) = O(2*N)
    // sc: O(N)
    // similar to brute force seeprate the positives and negatives and then add the positives and negatives and then add the leftover 
    // there are two cases when more positives and when there are more negatives!
    int n = nums.size();
    vector<int> nes, pos;
    for (int i  = 0; i < n; i++){
        if (nums[i] > 0){
            pos.push_back(nums[i]);
        }
        else {
            nes.push_back(nums[i]);
        }
    }
    int p = pos.size();
    int m = nes.size();
    if (p > m){
        for (int i = 0; i < m; i++){
            nums[2*i] = pos[i];
            nums[2*i+1] = nes[i];
        }
        for (int i = m; i < p; i++){
            nums[m+i] = pos[i];
        }
    }
    else{
        for (int i = 0; i < p; i++){
            nums[2*i] = pos[i];
            nums[2*i+1] = nes[i];
        }
        for (int i = p; i < m; i++){
            nums[p+i] = nes[i];
        }
    }
    return nums;
}

int main(){
    vector<int> nums = {3,1,-2,-5,2,-4,-8,-6};
    vector<int> temp = brute_variant_2(nums);
    for (auto it: temp){
        cout<<it<<" ";
    }
}
