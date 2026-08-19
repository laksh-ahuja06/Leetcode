class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int size = nums.size ();
        int leftSum = 0;
        vector<int> leftArr;
         vector<int> rightArr;

        for (int i = 0; i < size; i++) {
            leftArr.push_back (leftSum);
            leftSum += nums[i];
        }

        int totalSum = 0; 

        for (int i = 0; i < size; i++) {
            totalSum += nums[i];     
        }

        int rightSum = totalSum;

        for (int i = 0; i < size; i++) {
            rightSum -= nums[i];
            rightArr.push_back (rightSum);
        }

        vector<int> finalArr;
        for (int i = 0; i<size; i++) {
            finalArr.push_back (std::abs(leftArr[i] - rightArr[i]));
        }

        return finalArr;

    }
};