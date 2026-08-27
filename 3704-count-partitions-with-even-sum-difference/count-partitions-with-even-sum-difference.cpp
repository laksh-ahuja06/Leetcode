class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int size = nums.size ();
        int answer = 0;
        for (int i = 0; i < size-1; i++) {
            int innerSum = 0;
            int outerSum = 0;
            for (int j = 0; j < i; j++) {
                innerSum+=nums[j];
            }
            for (int k = i; k < size; k++) {
                outerSum+=nums[k];
            }
            if (abs(innerSum-outerSum) % 2 == 0) answer++;
        }
        return answer;
    }
};