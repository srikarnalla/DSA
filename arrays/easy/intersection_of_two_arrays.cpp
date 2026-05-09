#include <bits/stdc++.h>
using namespace std;

//bruteforce method
vector<int> inter1(vector<int> a, vector<int> b, int m){
    int n = a.size();
    vector<int> visi(m);
    vector<int> ans;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++){
            if (a[i] == b[j] && visi[j] == 0){
                ans.push_back(a[i]);
                visi[j] = 1;
                break;
            }
            if (b[j] > a[j]) break;
        }
    }
    return ans;
}


//optimal method
vector<int> inter2(vector<int> a, vector<int> b){
    int n1 = a.size();
    int i = 0, j = 0;
    int n2 = b.size();
    vector<int> ans;
    while( i < n1 && j < n2 ){
        if (a[i]<b[j]){
            i++;
        }
        else if (a[i]>b[j]){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;

        }
    }
    return ans;
}


int main() {
    vector<int> arr1 = {1, 2, 2, 3, 3, 4, 5, 6};
    vector<int> arr2 = {2, 3, 3, 5, 6};

    vector<int> result = inter2(arr1, arr2);

    for (int x : result) {
        cout << x << " ";
    }
}
