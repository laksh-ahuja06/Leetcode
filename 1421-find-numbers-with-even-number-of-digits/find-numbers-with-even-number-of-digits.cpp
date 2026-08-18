#include <string.h>

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int size = nums.size ();
        int count = 0;

        for (int i = 0; i < size; i++) {
            int s = std::to_string (nums[i]).length();
            cout << s << endl;
            if (s%2 == 0) {
                count++;
            }
        }
        return count;
    }
};