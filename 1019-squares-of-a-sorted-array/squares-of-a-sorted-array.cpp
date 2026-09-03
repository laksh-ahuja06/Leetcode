class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        // Approach 1: use sorting
        for (int i = 0; i < nums.size (); i++) {
            nums[i] = pow (abs(nums[i]),2);}
        std::sort (nums.begin (), nums.end ());
        return nums;

        // Approach 2: use 2 pointers
        // for (int i = 0; i < nums.size (); i++) {
        //     nums[i] = pow (abs(nums[i]),2);}   

        // int left = 0;
        // for (int right = 1; right < nums.size (); right++) {
        //     if (nums[left] > nums[right]) {
        //         swap (nums[right], nums[left]);
        //         left++;
        //     }
        // }

        // return nums;
    }
};