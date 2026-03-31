// Problem: Print number crown Pattern
// Pattern Type: Nested Loops

// Idea:
// Outer loop controls rows
// Inner loop runs from 1 to 2*n and will print a number only when j<=i or j>2*n-i (increasing stars per row)

// Time Complexity: O(n^2)
// Space Complexity: O(1)

// Insight:
// Pattern grows with row index → base for pyramid patterns

#include <bits/stdc++.h>
using namespace std;

void print(int n){
    int start = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= 2*n; j++){
            if (j<=i || j>2*n-i){
                if (j<=i){
                    cout<<j;}
                else{
                    cout<<(2*n)-j+1;
                }
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    print(6);
}
