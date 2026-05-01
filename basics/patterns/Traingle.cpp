// Problem: Print equilateral Triangle Pattern
// Pattern Type: Nested Loops

// Idea:
// Outer loop controls rows
// Inner loop - 1 runs from n to i (decreasing gaps per row)
// Inner loop - 2 runs from 1 to 2*n-1 printing odd number of stars in each row

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
        for (int j =1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = 0; i<= n; i++){
        
    }
}

int main(){
    print(5);
}
