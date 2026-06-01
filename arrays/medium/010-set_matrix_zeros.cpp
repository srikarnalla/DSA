#include <bits/stdc++.h>
using namespace std;

void better(vector<vector<int>>& matrix){
    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> row(m,0);
    vector<int> col(n,0);
    for (int i = 1; i < m; i++){
        for (int j = 1; j < n; j++){
            if (matrix[i][j] == 0){
                row[i] = 1;       
                col[j] = 1;;
            }
        }
    }
    for (int i = 1; i < m; i++){
        for (int j = 1; j < n; j++){
            if (row[i] || col[j] ){
                matrix[i][j] = 0;
            }
        }
    }
}

void optimal(vector<vector<int>>& mat){
    int m = mat.size();
    int n = mat[0].size();
    bool checkrow , checkcol;
    for (int i = 0; i < m; i++){
        if (mat[i][0] == 0) checkrow = true;
    }
    for (int i = 0; i < n; i++){
        if (mat[0][i] == 0) checkcol = true;
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (mat[i][j] == 0){
                mat[i][0] = 0;
                mat[0][j] = 0;
            }
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (mat[i] ==0 || mat[j] == 0){
                mat[i][j] = 0;
            }
            if (checkrow == true) {
                mat[i][0] = 0;
            }
            if (checkcol = true){
                mat[0][j] = 0;
            }
        }
    }
    
}

int main(){
    vector<vector<int>> mat = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    better(mat);
    for (int i = 0; i < mat.size(); i++){
        for (int j = 0; j < mat[0].size(); j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<'\n';
    }
}
