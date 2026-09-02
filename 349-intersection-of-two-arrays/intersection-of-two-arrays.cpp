class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> answer;
        for (int i = 0; i < nums1.size (); i++) {
            if (std::ranges::contains (nums2, nums1[i])) {
                if (!std::ranges::contains (answer, nums1[i])) answer.push_back (nums1[i]);
            }
        }

        return answer;
    }
};