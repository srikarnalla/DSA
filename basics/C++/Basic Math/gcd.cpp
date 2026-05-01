#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
    while(a>0 && b>0){
        if (a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if (a==0){
        return b;
    }
    return a;
}

int main(){
    /*int a=10,b=30;
    for (int i=min(a,b);i>=1;i--){
        if ((a%i==0) && (b%i==0)){
            cout<<i;
            break;
        }
    }
    */
    int c = gcd(20,100);
    cout<<c;
}