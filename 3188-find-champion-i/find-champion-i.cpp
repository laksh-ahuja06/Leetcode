class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int maxIndex = 0;
        int maxSum = 0;
        for (int i = 0; i < grid.size (); i++) {
            int sum = 0;
            for (int j = 0; j < grid[0].size (); j++) {
                sum+=grid[i][j];
            }
            if (sum > maxSum) {
                    maxIndex = i;
                    maxSum = sum;
                } 
        }
        return maxIndex;
    }
};