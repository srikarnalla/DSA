#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i = 1; i <= n; i++){
        
        // spaces
        for(int s = 1; s <= n - i; s++){
            cout << " ";
        }

        // characters
        for(int j = 1; j <= 2*i - 1; j++){
            if(j <= i){
                cout << char('A' + j - 1);
            } else {
                cout << char('A' + (2*i - j - 1));
            }
        }

        cout << endl;
    }
}

int main(){
    print(4);
}