class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        // Approach 1: use sorting
        for (int i = 0; i < nums.size (); i++) {
            nums[i] = pow (abs(nums[i]),2);}
        std::sort (nums.begin (), nums.end ());
        return nums;
    }
};