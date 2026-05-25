#include <bits/stdc++.h>
using namespace std;

//brute method
//ki: generate all the subarrays and then find the biggest array with k using two loops and then finally print length of that array
//tc: O(N2)
//sc: O(1)
int fun1(vector <int> arr, int k1){
    int n = arr.size();
    int s, len  = 0;
    for (int i = 0; i < n; i++){
        s = 0;
        for (int j = i; j < n; j++){
            s += arr[j];
            if (s == k1){
                len = max(len,j-i+1);
            }
        }
    }
    return len;
}

//better method for negatives 
//ki: so we take subarrays and check the sum and use a hash map where we store the previous sums of the subarrays 
// so we check for sum - k if there exist a subarray of sum -k then the longest one is the one we take!
//tc: O(NlogN)
//sc: O(N)
int fun2(vector<int> a, long long k){
    int n = a.size();
    map <long long,int> hashmap;
    long long s = 0;
    int index = 0, len = 0;
    for (int i = 0; i < n; i++){
        s += a[i];
        if (s == k){
            len = max(len,i+1);
        }
        long long rem = s - k;
        if (hashmap.find(rem) != hashmap.end()){
            int len1 = i - hashmap[s-k];
            len = max(len,len1);    
        }
        if (hashmap.find(s) == hashmap.end()){
            hashmap[s] = i;
        }
    }
    return len;
}

//optimal method for positves and zero elements only !
//ki: two pointer method
// take two pointers and check if 
//tc: O(N2)
//sc: O(1)
int fun3(vector<int> arr, int k){
    int n = arr.size();
    int i = 0,len = 0;
    long long s = 0;
    for (int j = 0; j < n; j++){
        s += arr[j];
        while (s > k){
            s = s - arr[i];
            i++;
        }
        if (s == k){
            len = max(len,j-i+1);
        }
    }
    return len;
}

int fun3(vector<int> arr, long long k){
    int n = arr.size();
    long long s = arr[0];
    int maxlen = 0;
    int left = 0, right  = 0;
    while(right < n){
        while(left <= right && s > k){
            s = s - arr[left];
            left++;
        }
        if (s == k){
            maxlen = max(maxlen , r ight- left +1);
        }
        right++;
        if (right < n){
            s += arr[right];
        }
    }
    return maxlen;
}

int main(){
    vector <int> a = {1, 2, 3, 1, 1, 1, 4, 2, 3};
    cout<<fun3(a,3);
}
