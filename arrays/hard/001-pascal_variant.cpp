#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if (n == 0 || n == 1) return 1;
    return n*fact(n-1);
}

int nCr(int n, int r){
    return fact(n)/(fact(n-r)*fact(r));
}

int NcR(int n, int r){
    if ((n-r) < r){
        r = n-r;
    }
    int facto = 1;
    for (int i = 0; i < r; i++){
        facto = facto * (n-i)/(i+1);
    }
    return facto;
}

vector<int> printRow(int n){
    vector<int> temp;
    int facto = 1;
    for (int i = 0; i < n; i++){
        temp.push_back(facto);
        facto = facto * (n-i-1)/(i+1);
    }
    return temp;
}

vector<int> printRow1(int n){
    vector<int> temp(n,0);
    int facto = 1;
    if (n%2 == 0){
        for (int i = 0; i < n/2; i++){
        temp[i] = NcR(n-1,i);
        temp[n-1-i] = temp[i];
        }
    }
    else{
        for (int i = 0; i <= n/2; i++){
        temp[i] = NcR(n-1,i);
        temp[n-1-i] = temp[i];
        }
    }
    return temp;
}

vector<vector<int>> pt1(int numRows){
    vector<vector<int>> temp;
    for (int i = 0; i <= numRows-1; i++){
        vector<int> row;
        for (int j = 0; j <= i; j++){
            row.push_back(nCr(i,j));
        }
        temp.push_back(row);
    }
    return temp;
}

vector<vector<int>> pt2(int numRows){
    vector<vector<int>> temp;
    for (int i = 1; i <= numRows; i++){
        temp.push_back(printRow(i));
    }
    return temp;
}

int main(){
    vector<vector<int>> temp;
    vector<int> temp1;
    temp = pt2(4);
    for (int i = 0; i < temp.size(); i++){
        for (int j = 0; j < temp[i].size(); j++){
            cout<<temp[i][j];
        }
        cout<<endl;
    }
    temp1 = printRow1(8);
    for (auto it:temp1){
        cout<<it<<" ";
    }

    cout<<endl<<NcR(10,2);

}
