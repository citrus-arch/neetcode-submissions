class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);

        vector<bool> visited(n, false);

        for (auto edge: edges)
        {
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int count = 0;

        for (int i = 0; i<n; i++)
        {
            if (visited[i] == false)
            {
                count++;
                dfs(adj, i, visited);
            }
        }

        return count;
    }

private:
    void dfs(const vector<vector<int>> &adj, int node, vector<bool> &visited)
    {
        visited[node] = true;

        for (int i: adj[node])
        {
            if (visited[i] == false)
            {
                dfs(adj, i, visited);
            }
        }
    }
};
