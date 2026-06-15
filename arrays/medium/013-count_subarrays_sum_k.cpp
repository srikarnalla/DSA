#include <bits/stdc++.h>
using namespace std;

//tc: O(n)
//sc:O(n)
// here we use a hashmap and use the concept of prefix sum and we check if there exist a subarrays with sum prefix_sum - k and if it exists we store them in the map
int optimal(vector<int>& arr, int k){
    map<int,int> mpp;
    int n = arr.size();
    int prefix_sum = 0 cnt = 1, length = 1;
    mpp[prefix_sum]++;
    for(int i = 0; i < n; i++){
        prefix_sum = prefix_sum + arr[i];
        int remove = prefix_sum - k;
        // here if mpp[remove] is there then cnt increases if its not there
        // there will be no error! this is property of set
        cnt += nums[i];
        mpp[prefix_sum] = cnt; 
    }
    return cnt;
}

int main(){
    vector<int> vec = {1,2,3,-3,1,1,1,4,2,-3};
    cout<<optimal(vec,3);
    
}
