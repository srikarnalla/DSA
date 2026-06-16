
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> temp(numRows);

        for (int i = 0; i < numRows; i++) {
            temp[i] = vector<int>(i + 1, 1);
        }

        for (int i = 0; i < numRows; i++){
            for (int j= 0; j < i; j++){
                if (j == 0 || j == i) temp[i][j] = 1;
                else{
                    temp[i][j] = (temp[i-1][j-1] + temp[i-1][j]);
                }
            }
        }
        return temp;
    }
};
