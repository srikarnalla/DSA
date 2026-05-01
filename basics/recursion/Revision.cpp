#include <bits/stdc++.h>
using namespace std;

void name(int i, int n){
    //Base case
    if (i > n){
        return;
    }
    cout<<("name")<<endl;
    name(i+1,n);
}
void name1(int i, int n){
    if (i>n){
        return;
    }
    cout<<i<<" ";
    name1(i+1,n);
}
void name2(int i, int n){
    if (n < i){
        return;
    }
    cout<<n<<" ";
    name2(i,n-1);
}
void no_backtracking(int i, int n){
    if (i < 1){
        return;
    }
    no_backtracking(i-1,n);
    cout<<i<<" ";
}
void no_backtracking1(int i){
    if (i < 1){
        return;
    }
    no_backtracking1(i-1);
    cout<<i<<" ";
}
void sum1(int n, int sum2){
    if (n<1){
        cout<<sum2<<endl;
        return; 
    }
    sum1(n-1,sum2+n);
}
int sumfunctional(int n){
    if (n==0){
        return 0;
    }
    return (n + sumfunctional(n-1));
}
int multi(int n){
    if (n==1){
        return 1;
    }
    return (n*multi(n-1));
}
int swapA(int A[i], int A[l]){
    if (i>=l){
        return;
    }
     swapA(A[i+1],A[l-1]);
}
int main(){
    int n[7];
    for (auto:it n){
        cin>>n[i];
    }
    /*
    name(1,n);
    name1(1,n);
    cout<<endl;
    name2(1,n);
    cout<<endl;
    no_backtracking(3,3);
    no_backtracking1(3);
    sum1(10,0);
    cout<<sumfunctional(n)<<endl;
    cout<<multi(5);*/
    cout<<swapA(n[0],n[6]);
}