class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length () != t.length ()) return false;

        unordered_map<char, int> ump1;
        unordered_map<char, int> ump2;

        for (int i = 0; i < s.length (); i++) {
            ump1[s[i]]++;
        }

        for (int i = 0; i < t.length (); i++) {
            ump2[t[i]]++;
        }

        if (ump1 == ump2) return true;

        return false;
    }
};