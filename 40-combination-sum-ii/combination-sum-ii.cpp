class Solution {
public:

    vector<vector<int>> answer;

    void backtrack (int start, int sum, int target, vector<int>& currentCombination,
                    vector<int>& candidates) {
        
        if (sum == target) {
            answer.push_back (currentCombination);
            return;
        } 
        if (sum > target) return;
        for (int i = start; i < candidates.size (); i++) {
            if (i > start && candidates[i] == candidates[i - 1]) continue;
            
            int currentCandidate = candidates[i];
            currentCombination.push_back (currentCandidate);
            backtrack (i+1, sum+currentCandidate, target, currentCombination,
                        candidates);
            currentCombination.pop_back ();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> currentCombination;
        answer.clear ();
        sort(candidates.begin(), candidates.end());
        backtrack (0, 0, target, currentCombination, candidates);
        return answer;
    }
};