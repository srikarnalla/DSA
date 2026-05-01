// Problem: Print diamond Pattern
// Pattern Type: Nested Loops

// Idea:
// Outer loop controls rows
// Inner loop - 1 runs from n to i (decreasing space per row)
// Inner loop - 2 runs from 1 to 2i-1 (increasing odd stars per row)
//similarly printing an inverted triangle below to make a diamond

// Time Complexity: O(n^2)
// Space Complexity: O(1)

// Insight:
// Pattern grows with row index → base for pyramid patterns

#include <bits/stdc++.h> 
using namespace std;

void print(int n){
    for (int i = 1; i <= n; i++){
        for (int j = n; j >= i; j--){
            cout<<" ";
        }
        for (int k = 1; k<=2*i-1; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i =1;i<=n;i++){
        for (int l = 1; l <= i; l++){
            cout<<" ";
        }
        for (int m = 1; m <= 2*n-2*i+1; m++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    print(5);
}
