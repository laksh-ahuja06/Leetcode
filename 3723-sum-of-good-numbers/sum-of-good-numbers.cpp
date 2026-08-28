class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int count = 0;
        
        for (int i = 0; i < nums.size (); i++) {
            bool condn = true;
            if (i-k >= 0) {
                if (nums[i] <= nums[i-k]) condn = false;
            }
            if (i+k < nums.size ()) {
                if (nums[i] <= nums[i+k]) condn = false;
            }
            if (condn) count+=nums[i];
        }
        return count;
    }
};