class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        vector<vector<int>> adjlist (numCourses);
        vector<int> indegree (numCourses, 0);
        int count = 0;

        for (auto edge : prerequisites) {
            int index1 = edge[0];
            int index2 = edge[1];
            adjlist[index2].push_back (index1);
            indegree[index1]++;
        }

        queue<int> q;

        for (int i = 0; i < numCourses; i++) {
            if (indegree[i] == 0) {
                q.push (i);
            }
        }

        while (!q.empty ()) {
            int a = q.front ();
            q.pop ();
            count++;

            for (int neighbour : adjlist[a]) {
                indegree[neighbour]--;
                if (indegree[neighbour] == 0) {
                    q.push (neighbour);
                }
            }
        }

        return count == numCourses;
    }
};