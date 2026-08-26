class Solution {
public:
    int longestPalindrome(string s) {

        unordered_map<char, int> mp;
        for (char i : s) {
            mp[i]++;
        }

        int answer = 0;
        int count = 0;

        for (auto [key,value] : mp) {
            if (value%2 == 0) {
                answer+=value;
            }
            else if (value%2 != 0) {
                count++;
                answer+=value-1;
            }
        }

        if (count == 0) {
            return answer;
        }
        else {
            return answer+1;
        }
    }
};