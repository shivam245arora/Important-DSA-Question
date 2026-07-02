class Solution {
public:
    // DFS function to check if a path exists from 'node' to 'dest'
    bool dfs(int node, int dest, auto& adj, auto& visited) {

        // Mark the current node as visited so that we don't visit it again
        visited[node] = 1;

        // If the current node is the destination, the path is found
        if (node == dest)
            return true;

        // Traverse all the neighbours of the current node
        for (int nbr : adj[node]) {

            // Visit only the unvisited neighbour
            // This prevents getting stuck in a loop due to cycles
            if (!visited[nbr]) {

                // Apply DFS on the neighbour
                // If any recursive call finds the destination,
                // immediately return true
                if (dfs(nbr, dest, adj, visited) == true) {
                    return true;
                }
            }
        }

        // If no neighbour leads to the destination,
        // return false
        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source,
                   int destination) {

        // Create an adjacency list to represent the graph
        vector<vector<int>> adj(n);

        // Build the graph from the given edges
        for (int i = 0; i < edges.size(); i++) {

            // Extract the two vertices of the edge
            int u = edges[i][0];
            int v = edges[i][1];

            // Since the graph is undirected,
            // connect both u -> v and v -> u
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // Create a visited array initialized with 0 (false)
        // It keeps track of the nodes already visited during DFS
        vector<int> visited(n, 0);

        // Start DFS from the source node
        // If DFS reaches the destination, it returns true
        return dfs(source, destination, adj, visited);
    }
};