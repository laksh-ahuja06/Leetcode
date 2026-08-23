class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int size = nums.size ();
        vector<int> answer(1, -1);

        for (int i = 0; i < size; i++) {
            if (nums[i] < 0) {
                for (int j = i+1; j < size; j++) {
                    if (abs (nums[i]) == nums[j] && nums[j] > 0) {
                        answer.push_back (nums[j]);
                    }
                }
            }
            else {
                for (int j = i+1; j < size; j++) {
                    if (abs (nums[j]) == nums[i] && nums[j] < 0) {
                        answer.push_back (nums[i]);
                    }
            }
            }
        }

        auto max = std::max_element (answer.begin(), answer.end ());
        int maxNum = *max;
        return maxNum;
    }
};