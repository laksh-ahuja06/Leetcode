class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score = 0;
        int counter = 0;
        for (int i = 0; i < events.size (); i++) {
            if (events[i] == "0" || events[i] == "1" || events[i] == "2"
                || events[i] == "3" || events[i] == "4" || events[i] == "5" || events[i] == "6") {
                    score += stoi (events[i]);
                }
            else if (events[i] == "W") counter++;
            else if (events[i] == "WD") score++;
            else score++;
            if (counter == 10) return {score, 10};
        }
        return {score, counter};
    }
};