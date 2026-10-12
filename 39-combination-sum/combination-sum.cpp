class Solution {
public:

    vector<vector<int>> answer;

    void backtrack (int start, vector<int> currentCombination,
                    vector<int>& candidates, int sum, int target) {
        if (sum == target) {
            answer.push_back (currentCombination); 
            return;
        }
        if (sum > target) return;
        for (int i = start; i < candidates.size (); i++) {
            int currentCandidate = candidates[i];
            currentCombination.push_back (currentCandidate);
            backtrack (i, currentCombination, candidates, sum + currentCandidate, target);
            currentCombination.pop_back ();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> currentCombination;
        backtrack (0, currentCombination, candidates, 0, target);
        return answer;
    }
};