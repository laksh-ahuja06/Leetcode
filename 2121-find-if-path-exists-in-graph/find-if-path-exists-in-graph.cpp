class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

        // if (n == 1) return true;
        // for (int i = 0; i < edges.size (); i++) {
        //     int a = edges[i][0];
        //     int b = edges[i][1];
        //     if ((a == source && b == destination) || (a == destination && b == source)) {
        //         return true;
        //     }
        // }

        vector <vector<int>> adjlist (n);
        vector<bool> visited (n+1, false);

        for (auto edge : edges) {
            int a = edge[0];
            int b = edge[1];
            adjlist[a].push_back (b);
            adjlist[b].push_back (a);
        }

        queue<int> q;

        q.push (source);
        visited[source] = true;

        while (!q.empty ()) {
            int a = q.front ();
            if (a == destination) return true;
            q.pop ();

            for (int neighbour : adjlist[a]) {
                if (!visited[neighbour]) {
                    visited[neighbour] = true;
                    q.push (neighbour);
                }
            }
        }

        return false;
    }
};