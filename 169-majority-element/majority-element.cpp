class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size ();
        for (int i = 0; i < size; i++) {
            int firstNum = nums[i];
            int count = 0;
            for (int j = i; j < size; j++) {
                if (nums[j] == firstNum) {
                    count++;
                }
                if (count > size/2) {
                    return nums[j];
                }
            }
        }
        return 0;
    }
};