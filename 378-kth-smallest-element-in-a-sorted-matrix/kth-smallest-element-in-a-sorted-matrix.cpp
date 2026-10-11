class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> answer;
        
        for (int i = 0; i < matrix.size (); i++) {
            for (int j = 0; j < matrix[0].size (); j++) {
                answer.push_back (matrix[i][j]);
            }
        }

        std::sort (answer.begin (), answer.end ());
        
        if (k < answer.size ()); return answer[k-1];
        return -1;
    }
};