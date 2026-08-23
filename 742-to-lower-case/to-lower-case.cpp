class Solution {
public:
    string toLowerCase(string s) {
        int length = s.length ();
        for (int i = 0; i < length; i++) {
            s[i] = std::tolower (s[i]);
        }
        return s;
    }
};