#include <bits/stdc++.h>
using namespace std;

void ntooneb(int i,int n){
    if (i>n) return;
    ntooneb(i+1,n);
    cout<<i<<" ";

}

int main(){
    ntooneb(1,5);

}