class Solution {
public:
    void reverseString(vector<char>& s) {
        int size = s.size ();
        vector<char> dup = s;

        for (int i = 0; i < size; i++) {
            s[i] = dup[size-i-1];
        }

    }
};