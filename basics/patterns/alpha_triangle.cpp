#include <bits/stdc++.h>
using namespace std;

void print(int n){
for (int i = 0; i < n; i++){
    for (char j = (n+'A'-1)-i; j <= n+'A'-1; j++){
        cout<<j;
    }
    cout << endl;
    }
}

int main(){
print(5);
return 0;
}
