class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int size = nums.size ();
        int iterations = 0;
        int count = 0;
        int completed[100] = {0};

       for (int i = 0; i < size-1; i++) {
        for (int j = i+1; j < size; j++) {
            if ((nums[i] == nums[j]) && completed[i] == 0 && completed[j] == 0) {
                completed[i] = 1;
                completed[j] = 1;
                count++;
            }
        }
       }

       int newCount = 0;

        for (int i = 0; i < size; i++) {
            if (completed[i] == 0) {
                newCount++;
            }
        }

        vector<int> ans;
        ans.push_back (count);
        ans.push_back (newCount);
        return ans;
    }
};