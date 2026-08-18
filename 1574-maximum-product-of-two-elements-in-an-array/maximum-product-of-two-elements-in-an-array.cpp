class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int size = nums.size ();
        int finalAns = 0;

        for (int i = 0; i < size - 1; i++) {
            for (int j = i+1; j < size; j++) {
                int ans = (nums[i] - 1) * (nums[j] - 1);
                // if (ans > finalAns) finalAns = ans;
                finalAns = max (finalAns, ans);
            }
        }   

        return finalAns;

    }
};