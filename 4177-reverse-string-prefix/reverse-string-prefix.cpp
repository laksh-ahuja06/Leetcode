class Solution {
public:
    string reversePrefix(string s, int k) {
        int length = s.length ();
        string copy = s;
        for (int i = 0; i < k; i++) {
            s[i] = copy[k-1-i];
        }

        return s;
    }
};