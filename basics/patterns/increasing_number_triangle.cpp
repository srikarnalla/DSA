// Problem: print increasing number Triangle Pattern
// Pattern Type: Nested Loops

// Idea:
// Outer loop controls rows
// Inner loop runs from 0 to i,making a start variable and keep on increasing (increasing stars per row)

// Time Complexity: O(n^2)
// Space Complexity: O(1)


#include <bits/stdc++.h>
using namespace std;

void print(int n){
    int start = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout<<start;
            start++;
        }
        cout<<endl;
    }
}

int main(){
    print(5);
}
