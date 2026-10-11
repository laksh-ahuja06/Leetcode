class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        for (int i = 0; i < intervals.size ()-1; i++) {
            int v = i+1;
            int a = intervals[i][1];
            int b = intervals[v][0];
            if (a >= b) {
                intervals[i][1] = max (intervals[v][1], intervals[i][1]);
                intervals.erase (intervals.begin () + v);
                i--;
            }
        }

        return intervals;
    }
};