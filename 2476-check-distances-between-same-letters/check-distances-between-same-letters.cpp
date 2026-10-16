class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        for (int i = 0; i < s.length ()-1; i++) {
            int count = 0;
            for (int j = i+1; j < s.length (); j++) { 
                if (s[i] == s[j]) {
                    count = j - i - 1;
                    if (count == distance[s[i] - 'a']) continue;
                    else return false;
                    }
                }
        }
        return true;
    }
};