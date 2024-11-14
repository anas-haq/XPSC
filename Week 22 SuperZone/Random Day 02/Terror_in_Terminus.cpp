#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const int MAXN = 100005;  // Max number of cities.
const int LOG = 17;       // log2(100000) is approximately 16.6.

vector<int> adj[MAXN];    // Adjacency list for the cities.
int depth[MAXN];          // Depth of each city in the DFS tree.
int up[MAXN][LOG];        // Binary lifting table.
int n;                    // Number of cities in the current test case.

void dfs(int node, int parent) {
    up[node][0] = parent;  // The 2^0 (1 step) ancestor of the current node.
    for (int i = 1; i < LOG; i++) {
        if (up[node][i-1] != -1) {
            up[node][i] = up[up[node][i-1]][i-1];  // Fill the table using dynamic programming.
        }
    }
    
    for (int neighbor : adj[node]) {
        if (neighbor != parent) {
            depth[neighbor] = depth[node] + 1;
            dfs(neighbor, node);  // Recursive DFS call for children.
        }
    }
}

int lca(int u, int v) {
    if (depth[u] < depth[v]) swap(u, v);  // Make sure u is the deeper node.
    
    // Lift u up until both nodes are on the same depth.
    for (int i = LOG-1; i >= 0; i--) {
        if (depth[u] - (1 << i) >= depth[v]) {
            u = up[u][i];
        }
    }
    
    if (u == v) return u;  // If u and v are already the same, return u (or v).
    
    // Lift both u and v until their ancestors converge.
    for (int i = LOG-1; i >= 0; i--) {
        if (up[u][i] != up[v][i]) {
            u = up[u][i];
            v = up[v][i];
        }
    }
    
    return up[u][0];  // The parent of u (or v) is the LCA.
}

int find_middle(int u, int v) {
    int lca_uv = lca(u, v);
    int dist = depth[u] + depth[v] - 2 * depth[lca_uv];  // Distance between u and v.
    
    if (depth[u] - depth[lca_uv] >= dist / 2) {
        // Move up from u until we reach the middle node.
        int mid_depth = depth[u] - dist / 2;
        for (int i = LOG-1; i >= 0; i--) {
            if (depth[u] - (1 << i) >= mid_depth) {
                u = up[u][i];
            }
        }
        return u;
    } else {
        // Move up from v until we reach the middle node.
        int mid_depth = depth[v] - dist / 2;
        for (int i = LOG-1; i >= 0; i--) {
            if (depth[v] - (1 << i) >= mid_depth) {
                v = up[v][i];
            }
        }
        return v;
    }
}

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        cin >> n;
        
        // Clear adjacency list and reset depth and up arrays.
        for (int i = 1; i <= n; i++) {
            adj[i].clear();
            depth[i] = 0;
            for (int j = 0; j < LOG; j++) {
                up[i][j] = -1;
            }
        }
        
        // Read the edges.
        for (int i = 0; i < n-1; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        // Run DFS from city 1 (or any arbitrary city) to fill depth and up arrays.
        dfs(1, -1);
        
        int q;
        cin >> q;
        
        // Answer the queries.
        while (q--) {
            int u, v;
            cin >> u >> v;
            cout << find_middle(u, v) << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
