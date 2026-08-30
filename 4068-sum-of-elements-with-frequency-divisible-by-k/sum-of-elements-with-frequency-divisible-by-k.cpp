class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int, int> ump;
        for (int i = 0; i < nums.size(); i++) {
            ump[nums[i]]++;
        }
        int count = 0;
        for (auto [key, value] : ump) {
            if (value % k == 0) count+=key*value;
        }
        return count;
    }
};