#include <bits/stdc++.h>
using namespace std;


int merge(vector<int>& arr, int low, int mid, int high){
    int cnt = 0;
    int left = low, right = mid+1;
    vector<int> temp;
    while(left <= mid && right <= high){
        if (arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            cnt += (mid - left + 1);
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++){
        arr[i] = temp[i-low];
    }
    return cnt;
}

int merge_sort(vector<int>& arr, int low, int high){
    if (low >= high) return 0;
    int cnt = 0; 
    int mid = (low + high)/ 2;
    cnt += merge_sort(arr,low,mid);
    cnt+= merge_sort(arr,mid+1,high);
    cnt+= merge(arr,low,mid,high);
    return cnt;
}


int noOfInversions(vector<int>& nums){
    int n = nums.size();
    return merge_sort(nums,0,n-1);
}

int main(){
    vector<int> nums = {5,3,2,4,1};
    cout<<noOfInversions(nums);
}
