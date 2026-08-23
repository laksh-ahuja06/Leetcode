class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int size = grid.size ();
        int innerSize = grid[0].size ();

        for (int main = 0; main < k;main++) {
             vector<vector<int>> newGrid(size, vector<int> (innerSize));
                for (int i = 0; i < size; i++) {
                    for (int j = 0; j < innerSize; j++) {
                        if (j == innerSize - 1 && i < size-1) {
                            newGrid[i+1][0] = grid[i][innerSize-1];
                        }
                        else if (j == innerSize-1 && i == size-1) {
                            newGrid[0][0] = grid[size-1][innerSize-1];
                        }
                        else {
                            newGrid[i][j+1] = grid[i][j];
                        }
                }
            }
            grid = newGrid;
        }

        return grid;

    }
};