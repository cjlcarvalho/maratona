#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int x;
    int y;
    int w;
} Edge;

int adj[1000][1000];
int visited[1000];
int p[1000];
int N;

void dfs(int n) {
    visited[n] = 1;
    int i;
    for (i = 0; i < N; i++)
        if (adj[n][i] > 0 && !visited[i])
            dfs(i);
}

int find(int n) {
    if (n == p[n])
        return n;
    p[n] = find(p[n]);
    return p[n];
}

void union_(int x, int y) {
    int pX = find(y);
    p[pX] = x;
}

int is_connected(int x, int y) {
    return find(x) == find(y);
}

int cmp(const void* a, const void* b) {
    return ((Edge *)a)->w - ((Edge *)b)->w;
}

int main()
{
    int n, m, x, y, w, sum, components, i;

    while (scanf("%d %d", &n, &m) != EOF) {
        N = n;
        memset(adj, 0, sizeof(adj));
        memset(visited, 0, sizeof(visited));
        Edge edges[m];

        components = 0;

        for (i = 0; i < m; i++) {
            scanf("%d %d %d", &x, &y, &w);
            edges[i].x = x - 1;
            edges[i].y = y - 1;
            edges[i].w = w;
            adj[x - 1][y - 1] = w;
        }

        for (i = 0; i < n; i++) {
            if (!visited[i]) {
                components++;
                dfs(i);
            }
        }

        if (components > 1)
            printf("impossivel\n");
        else {
            for (i = 0; i < n; i++)
                p[i] = i;

            sum = 0;
            qsort(edges, m, sizeof(Edge), cmp);

            for (i = 0; i < m; i++) {
                if (!is_connected(edges[i].x, edges[i].y)) {
                    sum += edges[i].w;
                    union_(edges[i].x, edges[i].y);
                }
            }

            printf("%d\n", sum);
        }

    }

    return 0;
}

