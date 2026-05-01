#include <bits/stdc++.h>

using namespace std;

void print(int n){
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            if ((i==0)||(i==n-1) || (j==0)||(j==n-1)){
                cout<<n<<" ";
            }
            else if ((i==1)||(i==n-2) || (j==1)||(j==n-2)){
                cout<<n-1<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int n=5;
    print(n);
}
+