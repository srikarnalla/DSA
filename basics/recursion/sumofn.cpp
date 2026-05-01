#include <bits/stdc++.h>
using namespace std;

void sum(int i,int sumn){
    if (i<1){
        cout<<sumn;
        return;
    }
    sum(i-1,sumn+i);
}

int rsum(int n){
    if (n == 0){
        return 0;
    }
    return n + rsum(n-1);
}

int main(){
    sum(3,0);
    cout<<rsum(3);
}