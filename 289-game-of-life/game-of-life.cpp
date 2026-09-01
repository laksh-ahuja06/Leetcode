class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int rows = board.size ();
        int cols = board[0].size ();

        vector<vector<int>> neighbourCount (rows, vector<int>(cols,0));

        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                // Check all 8 possible directions
                for (int dr = -1; dr <= 1; ++dr) {
                    for (int dc = -1; dc <= 1; ++dc) {
                        if (dr == 0 && dc == 0) continue; // skip current element itself
                    

                    int newRow = r + dr;
                    int newCol = c + dc;

                    // Check whether neighbour is inside matrix
                    if (newRow >= 0 && newRow < rows &&
                        newCol >= 0 && newCol < cols &&
                        board[newRow][newCol] == 1) {
                            neighbourCount[r][c]++;
                        }
                    }
                }
            }
        }

        // now update the main vector

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (board[i][j] == 1 && neighbourCount[i][j] < 2) board[i][j] = 0;
                else if (board[i][j] == 1 && (neighbourCount[i][j] == 2 || neighbourCount[i][j] == 3)) continue;
                else if (board[i][j] == 1 && neighbourCount[i][j] > 3) board[i][j] = 0;
                else if (board[i][j] == 0 && neighbourCount[i][j] == 3) board[i][j] = 1;
            }
        }

    }
};