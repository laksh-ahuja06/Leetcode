class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int size = nums.size ();
        vector<int> answer;

        for (int i = 0; i < size-1; i+=2) {
            for (int j = i; j < i+1; j++) {
                int freq = nums[j];
                for (int k = 0; k < freq; k++) {
                    answer.push_back (nums[j+1]);
                }
            }
        }
        return answer;
    }
};