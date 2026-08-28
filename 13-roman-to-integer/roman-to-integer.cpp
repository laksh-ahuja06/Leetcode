class Solution {
public:
    int romanToInt(string s) {
        int answer = 0;

        unordered_map<char, int> ump = {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };

        for (int i = 0; i < s.length(); i++) {
            if (i+1 < s.length () && ump[s[i+1]] > ump[s[i]]) {
                answer -= ump[s[i]];
            }
            else answer+= ump[s[i]];
        }

        return answer;
    }
};