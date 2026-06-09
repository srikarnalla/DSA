    #include <bits/stdc++.h>
    using namespace std;

    vector<vector<int>> brute(vector<vector<int>> matrix){
        int n = matrix.size();
        vector<vector<int>> newm(n,vector<int>(n));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                newm[i][n-j-1] = matrix[j][i];
            }
        }
        return newm;
    }

    vector<vector<int>> optimal(vector<vector<int>> matrix){
        int n = matrix.size();
        for (int i = 0; i < n; i++){
            for (int j = i+1; j < n; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for (int i = 0; i < n; i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        return matrix;
    }

    

    int main(){
        vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
        vector<vector<int>> temp = optimal(matrix);
        for (int i = 0; i < matrix.size(); i++){
            for (int j = 0; j < matrix.size(); j++){
                cout<<temp[i][j]<<" ";
            }
            cout<<endl;
        }
    }
