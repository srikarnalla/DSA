#include <bits/stdc++.h>
using namespace std;
// here in character hashing we have totall 256 character therefore we 
// define a hash array of size 256

int main(){
    string s;
    cin>>s;
    int hash[256] = {0};

    for (int i = 0; i< s.size() ; i++){
        hash[s[i]]++;
        //hash[s[i]-'a'] += 1;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c]<<endl;
        //cout<< hash[c-'a']<<endl;

    }
}