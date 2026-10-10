class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> answer (m, vector<int> (n, 0));
        
        for (int i = 0; i < indices.size (); i++) {
            int firstIndice = indices[i][0];
            int secondIndice = indices[i][1];
          
            for (int i = 0; i < m; i++) {
                answer[i][secondIndice]++;
            }
            for (int i = 0; i < n; i++){
                answer[firstIndice][i]++;
            }
        }

        int count = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (answer[i][j] % 2 != 0) count++;
            }  
        }

        return count;
    }
};