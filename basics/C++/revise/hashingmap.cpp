#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    map <int,int> mpp;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        //precompute
        mpp[a[i]]++;
    }
    int maxi = 0;
    int mini = INT_MAX;
    int max_ele ,min_ele;
    for (auto it: mpp){
        cout<<it.first<<"-->"<<it.second<<endl;
        if(it.second > maxi){
            maxi = it.second;
            max_ele = it.first;
        }
        if(it.second < mini){
            mini = it.second;
            min_ele = it.first;
        }
    }
    cout<<maxi<<" "<<mini<<endl;
    cout<<max_ele<<" "<<min_ele<<endl;
    int q;
    cin>>q;
    while (q--){
        int number;   
        cin>>number;
        //fetch
        cout<<mpp[number]<<" "<<endl;
    }
}
