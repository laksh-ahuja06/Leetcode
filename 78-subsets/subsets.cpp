class Solution {
public:

    vector<vector<int>> answer;
    vector<int> element;

    void backtrack (int start, vector<int>& nums) {
        if (element.size () > nums.size ()) return;
        answer.push_back (element);
        for (int i = start; i < nums.size (); i++) {
            // if (i > start && nums[i] == nums[i - 1]) continue;
            int candidate = nums[i];
            element.push_back (candidate);
            backtrack (i+1, nums);
            element.pop_back ();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        backtrack (0, nums);
        return answer;
    }
};