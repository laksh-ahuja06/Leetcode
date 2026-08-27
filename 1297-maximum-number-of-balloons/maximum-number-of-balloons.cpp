class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> ump;
        int answer = INT_MAX;
        for (char c : text) {
            ump[c]++;
        }
        
        answer = min (answer, ump['b']);
        answer = min (answer, ump['a']);
        answer = min (answer, ump['l']/2);
        answer = min (answer, ump['o']/2);
        answer = min (answer, ump['n']);

        return answer;
    }
};