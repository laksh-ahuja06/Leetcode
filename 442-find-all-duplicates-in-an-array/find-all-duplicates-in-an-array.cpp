class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> answer;
        unordered_map<int, int> ump;
        for (int i = 0; i < nums.size (); i++) {
            ump[nums[i]]++;
        }
        for (auto[key,value] : ump) {
            if (value == 2) answer.push_back (key);
        }
        return answer;
    }
};