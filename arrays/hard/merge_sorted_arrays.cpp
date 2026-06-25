#include <bits/stdc++.h>
using namespace std;

void t1_brute(vector<int>& nums1, vector<int>& nums2, int m, int n){
    int left = 0, right = 0;
    vector<int> temp;
    while(left < m && right < n){
        if (nums1[left] >= nums2[right]){
            temp.push_back(nums2[right]);
            right++;
        }
        else{
            temp.push_back(nums1[left]);
            left++;
        }
    }

    while(left < m){
        temp.push_back(nums1[left]);
        left++;
    }

    while(right < n){
        temp.push_back(nums2[right]);
        right++;
    }

    for (int i = 0; i < temp.size(); i++){
        if (i < m){
            nums1[i] = temp[i];
        }
        else{
            nums2[i-m] = temp[i];
        }
    }
}

void t1_optimal(vector<int>& nums1, vector<int>& nums2, int m, int n){
    int left = m-1, right = 0;

    while(left >= 0 && right < n){
        if (nums1[left] < nums2[right]){
            break;
        }
        else{
            swap(nums1[left],nums2[right]);
            left--, right++;
        }
    }
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
}

void swapfun(vector<int>& nums1, vector<int>& nums2, int m, int n){
    if (nums1[m] > nums2[n]){
        swap(nums1[m],nums2[n]);
    }
}
void t1_optimal_1(vector<int>& arr1, vector<int>& arr2, int m, int n){
    int len = (m + n);
    int gap = (len/2) + (len % 2);

    while(gap > 0){
        int left = 0;
        int right = left + gap;
        while(right < len){
            if (left < m && right >= m){
                swapfun(arr1,arr2,left,right-m);
            }
            else if (left >= m ){
                swapfun(arr2,arr2,left-m,right-m);
            }
            else{
                swapfun(arr1,arr1,left,right);
            }
            left++, right++;
        }
      if (gap == 1) break; 
      gap = (gap/2) + (gap % 2); 
    }
}

int main(){
    vector<int> nums1 = {1, 3, 5, 7};
    vector<int> nums2 = {0, 2, 6, 8, 9};
    t1_optimal_1(nums1,nums2,4,5);
    for (auto it:nums1){
        cout<<it;
    }
    cout<<endl;
    for (auto it:nums2){
        cout<<it;
    }
}
