class Solution {
public:
    int calPoints(vector<string>& operations) {
        int size = operations.size ();
        vector<int> scores;

        for (int i = 0; i < size; i++) {
            if (operations[i] == "+" || operations[i] == "D" || operations[i] == "C") {
                if (operations[i] ==  "+") {
                    int newSize = scores.size ();
                    scores.push_back (scores[newSize-1] + scores[newSize-2]);
                }
                else if (operations[i] ==  "D") {
                    int newSize = scores.size ();
                    scores.push_back (scores[newSize-1]*2);
                }
                else if (operations[i] ==  "C") {
                    scores.pop_back ();
                }
            }
            else {
                scores.push_back (std::stoi (operations[i]));
            }
        }

        int count = 0;

        for (int i : scores) {
            count += i;
        }

        return count;
    }
};