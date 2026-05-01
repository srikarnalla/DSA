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