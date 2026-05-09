#include <bits/stdc++.h>
using namespace std;

//brute force method
void union1(int arr1[], int arr2[], int n1 , int n2){
    set<int> st;
    for (int i = 0 ; i < n1; i++){
        st.insert(arr1[i]);
    }
    for (int i = 0 ; i < n2; i++){
        st.insert(arr2[i]);
    }
    int n = st.size();
    vector<int> uni(n);
    int i = 0;
    for (auto it : st){
        uni[i++] = it;
    }
    for (int i = 0 ; i < n; i++){
        cout<<uni[i]<<" ";
    }
}

//optimal method
    vector<int> union2(vector<int> arr1, vector<int> arr2){
        int n1 = arr1.size();
        int n2 = arr2.size();
        int i , j;
        i = 0;
        j = 0;
        vector<int> unionArr;
        while(i < n1 &&  j < n2){
            if (arr1[i] <= arr2[j]){
                if (unionArr.size() == 0 || unionArr.back()!=arr1[i]){
                    unionArr.push_back(arr1[i]);
                    
                }
                i++;
            }
            else{
                if (unionArr.size() == 0 || unionArr.back()!=arr2[j]){
                    unionArr.push_back(arr2[j]);
                }
                j++;
            }
        }
        while(j<n2){
            if (unionArr.size() == 0 || unionArr.back()!=arr2[j]){
                unionArr.push_back(arr2[j]);
                
            }
            j++;
        }

        while(i<n1){
            if (unionArr.size() == 0 || unionArr.back()!=arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        return unionArr;
    }

int main() {
    vector<int> arr1 = {1, 2, 2, 3, 4};
    vector<int> arr2 = {2, 3, 5};

    vector<int> result = union2(arr1, arr2);

    for (int x : result) {
        cout << x << " ";
    }
}
