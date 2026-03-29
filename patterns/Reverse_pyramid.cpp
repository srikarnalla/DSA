// Problem: Inverted Triangle Pattern
// Pattern Type: Nested Loops

// Idea:
// Outer loop controls rows
// Inner loop runs from n to i (decreasing stars per row)

// Time Complexity: O(n^2)
// Space Complexity: O(1)

// Insight:
// Pattern decay with row index → base for inverted pyramid patterns


#include <bits/stdc++.h> 
using namespace std;

void print(int n){
    for (int i = 1; i <= n; i++){
        for (int j = n; j >= i; j--){
            cout<<n-j+1;
        }
        cout<<endl;
    }
}

int main(){
    print(5);
}
