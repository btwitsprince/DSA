class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
         int n = mat.size();
         int m = mat[0].size();
        vector <int> ans(2);
        int max = 0;
        for(int i=0; i<n; i++){
            int count = 0;
            for(int j=0; j<m; j++){
                if(mat[i][j] == 1){
                    count++;
                }
            }
            if(count > max){
                max = count;
                ans[0] = i;
                ans[1] = max;
            }
        }
        return ans;
    }
};