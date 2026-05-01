// Problem: Print Right-Angled Triangle Pattern
// Pattern Type: Nested Loops

// Idea:
// Outer loop controls rows
// Inner loop runs from 0 to i (increasing stars per row)

// Time Complexity: O(n^2)
// Space Complexity: O(1)

// Insight:
// Pattern grows with row index → base for pyramid patterns


#include <bits/stdc++.h>
 
using namespace std;

void print(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    print(4);
}
