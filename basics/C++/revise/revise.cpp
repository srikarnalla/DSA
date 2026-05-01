#include <bits/stdc++.h>
using namespace std;

void rarray(int i, int array[], int n){
    if (i>=n/2) return;
    swap(array[i], array[n-1-i]);
    rarray(i+1, array, n);
}

bool palindrome(int i , string &s){
    if (i>=s.size()/2) return true;
    if (s[i]!=s[s.size()-i-1]) return false;
    return palindrome(i+1, s);
}

int fibo(int n){
    if (n<=1) return n;
    return fibo(n-1)+fibo(n-2);
}

int main(){
    int n,n1; 
    cin >> n;
    /*int a[n];
    for (int i=0; i<n; i++) cin >> a[i];
    rarray(0, a, n);
    for (int i=0; i<n; i++) cout << a[i] << " ";
    cout << endl;
    string s;
    cin >> s;   
    cout << palindrome(0, s) << endl;
    cout << fibo(n) << endl;*/
  
}