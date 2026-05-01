#include <bits/stdc++.h>
using namespace std;

void NoOfDigits(int n) {
    int number=0;
    while(n != 0){
        int ld = n % 10;
        number = number*10 + ld;
        n = n / 10;
    }
    cout<<number<<endl;
    
}

int main() {
    int N;
    cin>>N;
    NoOfDigits(N);  
    return 0;
}
