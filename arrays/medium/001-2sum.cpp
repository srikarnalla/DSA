#include <bits/stdc++.h>
using namespace std;

//ki: run two loops and find the sum of two elemnts whose value is equal to target
//tc: less or similar to O(N2)
//sc:O(1)
void brute(vector<int> a, int target){
    int n = a.size();
    int cnt = 0;
    for (int i  = 0; i < n; i++){
        /*this is not opimised
        for (int j = 0; j < n; j++){
        if (a[i]==a[j]) continue;
        if (a[i]+a[j] == target){
            cout<<"Yes, and at index "<<i<<" "<<j<<endl;
            cnt++;
            }
        }
        */
        for (int j = i+1; j < n; j++){
            if (a[i]+a[j] == target){
                cout<<"Yes, and at index "<<i<<" "<<j<<endl;
                cnt++;
            }
        }
    }
    if (cnt == 0){
        cout<<"No"<<endl;
    }
}

//ki: use a hashmap store the target - element value and find if there exist any element of this 
//tc: less or similar to O(N)
//sc:O(n)
void better(vector<int> a, int target){
    int cnt = 0;
    int n = a.size();
    map<int,int> mpp;
    for (int  i = 0; i < n; i++){
        int a1 = a[i];
        int more = target - a1;
        if (mpp.find(more)!=mpp.end()){
            cout<<"Yes, and at index "<<mpp[more]<<", "<<i<<endl;
            cnt++;
        }
        mpp[a1] = i;
    }
    if (cnt == 0){
        cout<<"No"<<endl;
    }
}

//ki: run two loops and find the sum of two elemnts whose value is equal to target
//tc: less or similar to O(N+NlogN) 
//sc:O(1) or O(N) (because we have replaced the intial array
bool optimal(vector<int> a, int target){
    int n = a.size();
    sort(a.begin(),a.end());
    int left = 0, right = n-1;
    while(left < right){
        int s1 = a[left] + a[right];
        if (s1 == target) return true;
        else if (s1 > target) right--;
        else left++;
    }
    return false;
}

int main(){
    vector<int> a = {2, 6, 5, 8, 11};
    cout<<optimal(a,14);
}
