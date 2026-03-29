// Problem: Print inverted equilateral Triangle Pattern
// Pattern Type: Nested Loops

// Idea:
// Outer loop controls rows
// Inner loop - 1 runs from 1 to i (increasing space per row)
// Inner loop - 2 runs from 2n-2i+1 to 1 (decreasing odd stars per row)

// Time Complexity: O(n^2)
// Space Complexity: O(1)

// Insight:
// Pattern grows with row index → base for pyramid patterns

#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout<<" ";
        }
        for (int j =(2*n-2*i+1);j>=1;j--){
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
