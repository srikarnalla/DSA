#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n;i++){
        cin>>arr[i];
    }
    //precomute
    int hash[13] = {0};
    for (int i=0;i<n;i++){
        hash[arr[i]] += 1;
    }
    
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout << hash[number] << endl;
    }

    int max_freq = 0 , min_freq = 0;
    int max_elem = hash[arr[0]]; , min_elem;
    for (int i = 0 ;i <q ;i++){
        for (int j = 1;j<n;j++){
            if 

        }
    }
    return 0;

}