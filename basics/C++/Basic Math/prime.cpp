#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for (int i = 2 ; i<= sqrt(n); i++){
        if (n%i==0){
            return 0;
            break;
        }
    }
    return 1;
}

int main(){
    if(isPrime(10)){
        cout<<"The number is prime"<<endl;
    }else{
        cout<<"The number is not prime"<<endl;
    }
}