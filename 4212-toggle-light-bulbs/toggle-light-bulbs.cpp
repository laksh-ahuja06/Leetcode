class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        map<int, int> um;

        for (int i = 0; i < bulbs.size (); i++) {
            um[bulbs[i]]++;
        }

        bulbs.clear ();

        for (auto [key, value] : um) {
            if (value % 2 == 0) continue;
            else {
                bulbs.push_back (key);
            }
        }
        return bulbs;
    }
};