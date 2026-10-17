class Solution {
public:
    unordered_map<int, int> shortestPath(int n, vector<vector<int>>& edges, int src) {
        // lista susedstva: adj[u] = vektor parova {sused, tezina}
        vector<vector<pair<int,int>>> adj(n);
        for (auto& e : edges)
            adj[e[0]].push_back({e[1], e[2]});

        vector<int> dist(n, INT_MAX);
        dist[src] = 0;

        // min-heap parova {rastojanje, cvor}
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
        pq.push({0, src});
        while (!pq.empty()) {
            auto [d, u] = pq.top();
            pq.pop();
            if (d > dist[u]) continue;

            for (auto& [v, w] : adj[u]) {
                if (dist[v] > d + w) {
                    dist[v] = d + w;
                    pq.push({d + w, v});
                }
            }
        }

        unordered_map<int,int> ret;
        for (int v = 0; v < n; v++)
            ret[v] = (dist[v] == INT_MAX) ? -1 : dist[v];
        return ret;
    }
private:
    
};
