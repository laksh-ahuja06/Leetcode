class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        std::vector<int> finalAns;
        std::vector<int> afterNums;
        int size = nums.size ();
        int count = 0;

        for (int i = 0; i < size; i++) {
            if (nums[i] < pivot) {
                finalAns.push_back (nums[i]);
            }
            else if (nums[i] == pivot) {
                count+=1;
                continue;
            }
            else {
                afterNums.push_back (nums[i]);
            }
        }

        for (int i = 0; i < count; i++) {
            finalAns.push_back (pivot);
        }

        int afterSize = afterNums.size ();

        for (int i = 0; i < afterSize; i++) {
            finalAns.push_back (afterNums[i]);
        }
        return finalAns;
    }
};