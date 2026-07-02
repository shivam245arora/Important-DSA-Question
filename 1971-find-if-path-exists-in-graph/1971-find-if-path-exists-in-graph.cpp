class Solution {
public:
    bool dfs(int node, int dest, auto& adj, auto& visited) {
        visited[node] = 1;
        if (node == dest)
            return true;
        for (int nbr : adj[node]) {
            if (!visited[nbr]) {
                if (dfs(nbr, dest, adj, visited) == true) {
                    return true;
                }
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source,
                   int destination) {
        vector<vector<int>> adj(n);

        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0], v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> visited(n, 0);

        return dfs(source, destination, adj, visited);
    }
};