// Problem: Print isoceles Triangle Pattern
// Pattern Type: Nested Loops

// Idea:
// Outer loop controls rows
// Inner loop  runs from 1 to stars, and stars changes depending on the value of i, whenever i>n then stars becomes 2n-i (increasing space per row)

// Time Complexity: O(n^2)
// Space Complexity: O(1)

// Insight:
// Pattern grows with row index → base for pyramid patterns

#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i = 1; i <= 2*n-1; i++){
       int stars = i;
       if(i>n){
        stars = 2*n-i;
        }
       for (int j = 1; j <= stars;j++){
        cout<<"*";
       }
       cout<<endl;
    }
}

int main(){
    print(5);
}

/**#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i=1;i<n;i++){
        for (int j = n-1;j >= i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    print(5);
}**/
