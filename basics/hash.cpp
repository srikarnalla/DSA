/*
hashing an array using a map and then finding the least occured element and the most occured element!
used a unordered_map here and there is no collision case here if present then TC maybe different!
*/

  
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    unordered_map <int,int> mpp;
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


/*
hashing an array of characters!

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    //precompute
    int hash[256]={0};
    for (int i = 0; i < s.size(); i++){ 
        //if only lower case s[i]-'a'
        //if upper case s[i]-'A'
        //if all the characters are present use ntg
        //cause hash array is an integer we r giving
        //character so gets typecasted
        hash[s[i]]++;
    } 

    int q;
    cin>>q;
    while (q--)
    {
        char s1;  
        cin>>s1;
        //fetch
        cout<<hash[s1]<<" "<<endl;//s1 is getting typecastedd
    }
    

}

hashing an array using a hashmap!

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    //precompute
    int hash[13]={0};
    for (int i = 0; i < n; i++){ 
        hash[a[i]]++;
    } 

    int q;
    cin>>q;
    while (q--)
    {
        int number;   
        cin>>number;
        //fetch
        cout<<hash[number]<<" "<<endl;
    }
    

}

*/
