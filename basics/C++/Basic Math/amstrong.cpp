#include <bits/stdc++.h>

using namespace std;

int count(int n){
    int cnt = (int)(log10(n)+1);
    return cnt;
}

void amstrong(int n){
    //converting to string and finding its lenght.
    int cnt = to_string(n).length();
    int n1=n;
    int value;
    while(n>0){
        int r = n%10;
        value=value+pow(r,cnt);
        n/=10;
    }
    if (n1 == value){
        cout<<"Amstrong number"<<endl;
    }
    else cout<<"Not an Amstrong number"<<endl;
}

int main(){
    int n=153;
    amstrong(n);
}
