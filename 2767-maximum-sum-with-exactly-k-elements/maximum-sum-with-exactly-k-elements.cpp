class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int size = nums.size();
        int max = 0;
        int count = 0;

        for (int i = 0; i < size; i++) {
            if (nums[i] > max) max = nums[i];
        }

        for (int i = 0; i < k; i++) {
            count+=max;
            max++;
        }

        return count;

    }
};