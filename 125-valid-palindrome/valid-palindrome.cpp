class Solution {
public:
    bool isPalindrome(string s) {
        stringstream ss(s);
        string word;
        string result;
        while (ss >> word) {
            result+=word;
        }
        int length = result.length ();
        for (int i = length-1; i >= 0; i--) {
            result[i] = std::tolower (result[i]);
            if (!std::isalnum (result[i])) {
                result.erase (i, 1);
            }
        }

        cout << result << endl;

        for (int i = 0; i < result.length ()/2; i++) {
            if (result[i] == result[result.length() - i -1]) {
                continue;
            }
            else {
                return false;
            }
        }
        return true;
    }
};