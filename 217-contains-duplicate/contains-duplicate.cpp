class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> ump;
        for (int i = 0; i < nums.size(); i++) {
            ump[nums[i]]++;
        }
        for (auto [key, value] : ump) {
            if (value > 1) return true;
            else continue;
        }
        return false;
    }
};