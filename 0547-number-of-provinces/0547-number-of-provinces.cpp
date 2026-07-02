class Solution {
public:
    void dfs(int node, vector<vector<int>>& isConnected, vector<int>& visited) {
        visited[node] = 1; // Mark the current city as visited
        
        // Traverse all potential neighbors (cities)
        for (int neighbor = 0; neighbor < isConnected.size(); neighbor++) {
            // If there is a connection and the neighbor hasn't been visited yet
            if (isConnected[node][neighbor] == 1 && !visited[neighbor]) {
                dfs(neighbor, isConnected, visited);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int provinceCount = 0; // Renamed to avoid std::count conflict
        vector<int> visited(n, 0);

        for (int i = 0; i < n; i++) {
            // If the city hasn't been visited, it belongs to a new province
            if (!visited[i]) {
                provinceCount++;
                dfs(i, isConnected, visited); // Discover the entire province
            }
        }

        return provinceCount;
    }
};