class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
       map<int, int> ump;
       for (int i = 0; i < matrix.size (); i++) {
            for (int j = 0; j < matrix[0].size (); j++) {
                ump[j] += matrix[i][j];
            }
       } 
       vector<int> answer;
       for (auto[key,value] : ump) {
            answer.push_back (value);
       }
       return answer;
    }
};