#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int x;
    int y;
    int w;
} Edge;

int p[1000];

void make_set(int n) {
    for (int i = 0; i < n; i++)
        p[i] = i;
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
        Edge edges[m];

        for (i = 0; i < m; i++) {
            scanf("%d %d %d", &x, &y, &w);
            edges[i].x = x - 1;
            edges[i].y = y - 1;
            edges[i].w = w;
        }

        make_set(n);

        sum = 0;
        components = n;
        qsort(edges, m, sizeof(Edge), cmp);

        for (i = 0; i < m; i++) {
            if (!is_connected(edges[i].x, edges[i].y)) {
                sum += edges[i].w;
                union_(edges[i].x, edges[i].y);
                components--;
            }
        }

        if (components > 1)
            printf("impossivel\n");
        else
            printf("%d\n", sum);

    }

    return 0;
}

