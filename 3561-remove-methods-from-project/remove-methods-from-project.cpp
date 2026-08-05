class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& v) {
 vector<vector<int>> adj(n);
        for (auto &e : v) {
            adj[e[0]].push_back(e[1]);
        }

        // Find all suspicious methods
        vector<int> vis(n, 0);
        queue<int> q;
        q.push(k);

        while (!q.empty()) {
            int u = q.front();
            q.pop();

            if (vis[u]) continue;
            vis[u] = 1;

            for (int v : adj[u]) {
                if (!vis[v])
                    q.push(v);
            }
        }

        // Check if any non-suspicious method invokes a suspicious one
        for (auto &e : v) {
            int u = e[0], v = e[1];
            if (!vis[u] && vis[v]) {
                vector<int> ans;
                for (int i = 0; i < n; i++)
                    ans.push_back(i);
                return ans;
            }
        }

        // Return remaining methods (non-suspicious)
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (!vis[i])
                ans.push_back(i);
        }

        return ans;
    }
};