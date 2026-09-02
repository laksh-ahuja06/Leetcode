class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> us;
        for (int i = 0; i < nums.size (); i++) {
            us[nums[i]]++;
        }

        int target = nums.size () / 2;

        for (auto [key, value] : us) {
            if (value == target) return key;
        }

        return -1;
    }
};