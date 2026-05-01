// Problem: Print binary Triangle Pattern
// Pattern Type: Nested Loops

// Idea:
// Outer loop controls rows
// Inner loop - 1 runs from 1 to i, and we start with 1  when i is even or else 0 and keep repeating 1 and 0 alternately(increasing space per row)


// Time Complexity: O(n^2)
// Space Complexity: O(1)

// Insight:
// Pattern grows with row index → base for pyramid patterns

#include <bits/stdc++.h>
using namespace std;

void print(int n){
    int start = 1;
    for (int i = 1; i <= n; i++){
        if ((i%2) == 1 ){start = 1;}
        else {start = 0;}
        for (int j =1;j<=i;j++){
            cout<<start;
            start=1-start;
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
       for (int j = 1; j<=i; j++){
        if ((i-j) % 2 == 1 ){cout<<0;}
        else{cout<<1;}
            
       }
       cout<<endl;
    }
}

int main(){
    print(5);
}**/
