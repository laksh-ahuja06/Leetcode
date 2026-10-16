class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int length = nums.size ();
        int count = 0;
        for (int i = 1; i <= length; i++) {
            if (length%i==0) count = count + nums[i-1]*nums[i-1];
        }
        return count;
    }
};