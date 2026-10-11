class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> answer (nums);
        for (int i : nums) {
            answer.push_back (i);
        }
        return answer;
    }
};