#include <bits/stdc++.h>
using namespace std;

void oneton(int i,int n){
    if (i>n) return;
    cout<<i<<" ";
    oneton(i+1,n);
}

void onetonb(int i,int n){
    if (i<1) return;
    onetonb(i-1,n);
    cout<<i<<" ";
}

int main(){
    oneton(1,10);
    cout<<endl;
    onetonb(10,10);

}