class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        std::sort (nums.begin (), nums.end ());

        set<int> us;

        for (int i : nums) {
            us.insert (i);
        }

        nums.clear ();

        for (int i : us) {
            nums.push_back (i);
        }

        vector<int> answer;

        for (int i = nums.size ()-1; i >= 0 && answer.size () < k; i--) {
           answer.push_back (nums[i]);
        }

        return answer;
    }
};