class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int size = nums.size ();
        vector<int> ans;

        for (int i = 0; i < size; i++) {
            if (nums[i] % 2 == 0) {
                int count = 0;
                    for (int j = i+1; j < size; j++) {
                        if (nums[j]%2 != 0) {
                            count++;
                        }
                    }
                ans.push_back (count);
            }
            else {
                int count = 0;
                    for (int j = i+1; j < size; j++) {
                        if (nums[j]%2 == 0) {
                            count++;
                        }
                    }
                ans.push_back (count);
            }
        }
        return ans;
    }
};