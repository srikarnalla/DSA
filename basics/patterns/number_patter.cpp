//Here n-mindistance from the edge will give us the value of the number at that position
//Tc: O(n2)
//sc:1

#include <bits/stdc++.h>
using namespace std;


    void pattern(int n) {
        for (int i = 0; i < 2 * n - 1; i++) {
            for (int j = 0; j < 2 * n - 1; j++) {
                int top = i;
                int left = j;
                int bottom = (2 * n - 2) - i;
                int right = (2 * n - 2) - j;
                int minDist = min(min(top, bottom), min(left, right));
                cout << (n - minDist) << " ";
            }
            cout << endl;
        }
    }

int main() {
    int N = 5;
    pattern(N);

    return 0;
}
