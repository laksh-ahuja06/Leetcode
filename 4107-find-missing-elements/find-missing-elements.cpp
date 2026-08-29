class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> answer;
        std::sort (nums.begin (), nums.end ());
        for (int i = nums[0]; i < nums[nums.size()-1]; i++) {
            if (std::ranges::contains (nums, i)) {
                continue;
            }
            else {
                answer.push_back (i);
            }
        }
        return answer;
    }
};