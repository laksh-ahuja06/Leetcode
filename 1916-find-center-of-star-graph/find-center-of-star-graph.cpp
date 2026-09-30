class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int> indegree;
        for (int i = 0; i < edges.size (); i++) {
            int a = edges[i][0];
            int b = edges[i][1];
            indegree[a]++;
            indegree[b]++;
        }

        for (auto [key, value] : indegree) {
            if (value == edges.size ()) {
                return key;
            }
        }
        return -1;
    }
};