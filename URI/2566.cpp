#include <bits/stdc++.h>

using namespace std;

struct Node {
    int dist = INT_MAX;
    map<int, int> adj;

    void add_adj(int a, int r) {
        adj[a] = r;
    }

    int W(int a) {
        return adj[a];
    }

    bool operator>(const Node* b) const {
        return dist > b->dist;
    }
};

typedef vector<Node*> Graph;

int dijkstra(Graph& graph) {
    priority_queue<Node*, Graph, greater<Node*>> Q;

    for (Node* node : graph)
        Q.push(node);

    while(!Q.empty()) {
        Node* u = Q.top();
        Q.pop();

        for (auto& adj : u->adj) {
            int weight = u->W(adj.first);
            Node* v = graph[adj.first];
            int dist = u->dist + weight;
            if (dist < 0)
                dist = INT_MAX;
            if (v->dist > dist) {
                v->dist = dist;
                Q.push(v);
            }
        }
    }

    return graph.back()->dist;
}

int main()
{
    int n, m, a, b, t, r;

    while (cin >> n >> m) {
        Graph nodes_bus;
        Graph nodes_air;
        for (int i = 0; i < n; i++) {
            nodes_bus.push_back(new Node);
            nodes_air.push_back(new Node);
        }
        nodes_bus[0]->dist = 0;
        nodes_air[0]->dist = 0;

        for (int i = 0; i < m; i++) {
            cin >> a >> b >> t >> r;

            if (t == 0)
                nodes_bus[a - 1]->add_adj(b - 1, r);
            else
                nodes_air[a - 1]->add_adj(b - 1, r);
        }

        int cost_bus = dijkstra(nodes_bus);
        int cost_air = dijkstra(nodes_air);

        int min_cost = min(cost_bus, cost_air);

        cout << min_cost << endl;

        for (int i = 0; i < n; i++) {
            delete nodes_bus[i];
            delete nodes_air[i];
        }
    }

    return 0;
}
