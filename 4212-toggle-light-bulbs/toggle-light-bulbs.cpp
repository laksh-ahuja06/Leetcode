class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int> answer;
        map<int, int> um;

        for (int i = 0; i < bulbs.size (); i++) {
            um[bulbs[i]]++;
        }

        for (auto [key, value] : um) {
            if (value % 2 == 0) continue;
            else {
                answer.push_back (key);
            }
        }
        return answer;
    }
};