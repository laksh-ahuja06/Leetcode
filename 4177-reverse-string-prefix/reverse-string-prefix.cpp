class Solution {
public:
    string reversePrefix(string s, int k) {
        string copy = s;
        for (int i = 0; i < k; i++) {
            s[i] = copy[k-1-i];
        }

        return s;
    }
};