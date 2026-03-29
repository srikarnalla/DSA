// Problem: Print Square Pattern (4*4)
// Pattern Type: Basic Nested Loop

// Idea:
// Used two loops:
// Outer loop → rows
// Inner loop → columns
// Print "*" for each column

// Time Complexity: O(n^2)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    print(5);
}
