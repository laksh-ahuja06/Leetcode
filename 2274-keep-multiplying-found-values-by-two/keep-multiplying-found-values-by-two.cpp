class Solution {
public:

    int findFinalValue(vector<int>& nums, int original) {
        int size = nums.size ();
        int answer;
        while (std::ranges::contains (nums, original)) {
            for (int i = 0; i < nums.size (); i++) {
            if (nums[i] == original) {
                original = original * 2;
            }
        }
        answer = original;
        }
        return answer;
    }
};