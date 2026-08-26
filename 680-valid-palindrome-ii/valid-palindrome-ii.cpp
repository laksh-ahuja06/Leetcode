class Solution {
public:
    bool validPalindrome(string s) {
        int length = s.length ();
        string copy1 = s;
        string copy2 = s;

        for (int i = 0; i < length; i++) {
            if (s[i] == s[length-i-1]) {
                continue;
            }
            else {
                copy1.erase (i,1);
                copy2.erase (length-i-1,1);
                break;
            }
        }

        int count = 0;

        for (int i = 0; i < copy1.length(); i++) {
            if (copy1[i] == copy1[copy1.length()-i-1]) {
                count++;
                continue;
            }
        }

        cout << count << " " << copy1.length() << endl;

        if (count == copy1.length()) return true;

        for (int i = 0; i < copy2.length(); i++) {
            if (copy2[i] == copy2[copy2.length()-i-1]) {
                continue;
            }
            else {
                return false;
            }
        }

        return true;
    }
};