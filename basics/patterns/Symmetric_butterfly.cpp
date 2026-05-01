#include <bits/stdc++.h>
using namespace std;

void print(int n){
for (int i = 0; i < n; i++){
    for (int j = 0; j <= i; j++){
        cout<<'*';
    }
    for (int k=2*n;k>2*i+2;k--){
        cout<<" ";
    }
    for (int j =0;j<=i;j++){
        cout<<'*';
    }
    cout << endl;
    }
for (int i = 1; i < n; i++){
    for (int j = n-i; j > 0; j--){
        cout<<'*';
    }
    for (int k=0;k<2*i;k++){
        cout<<" ";
    }
    for (int j =n-i;j>0;j--){
        cout<<'*';
    }
    cout << endl;
    }
}


int main(){
print(5);
return 0;
}
