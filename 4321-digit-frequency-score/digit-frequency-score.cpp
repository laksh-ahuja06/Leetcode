class Solution {
public:
    int digitFrequencyScore(int n) {
        string s = std::to_string (n);
        
        int answer = 0;

        for (int i = 0; i < s.length (); i++) {
            answer+=s[i] - '0';
        }

        return answer;
    }
};