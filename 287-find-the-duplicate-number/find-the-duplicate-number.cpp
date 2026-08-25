class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
    unordered_set<int> seen;

    for (int x : nums) {
        if (seen.contains(x)) {
            return x;
        }
        seen.insert (x);
        }
        return 0;
        }
    
};