#include <bits/stdc++.h>

using namespace std;

void floyd_warshall(int mat[100][100], int dist[101][100][100], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            dist[0][i][j] = mat[i][j];

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][k] + mat[k][j] >= 0)
                    mat[i][j] = min(mat[i][j], mat[i][k] + mat[k][j]);
                dist[k + 1][i][j] = mat[i][j];
            }
        }
    }
}

int main()
{
    int n, m, u, v, w, c, o, d, t;
    int mat[100][100];
    int dist[101][100][100];
    int inst = 1;

    while (scanf("%d %d", &n, &m) != EOF) {
        printf("Instancia %d\n", inst++);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                mat[i][j] = (i == j ? 0 : INT_MAX);
        for (int i = 0; i < m; i++) {
            scanf(" %d %d %d", &u, &v, &w);
            if (w < mat[u - 1][v - 1]) 
                mat[u - 1][v - 1] = w;
        }
        floyd_warshall(mat, dist, n);
        scanf(" %d", &c);
        while (c--) {
            scanf(" %d %d %d", &o, &d, &t);

            if (dist[t][o - 1][d - 1] != INT_MAX)
                printf("%d\n", dist[t][o - 1][d - 1]);
            else
                printf("-1\n");
        }
        printf("\n");
    }
    return 0;
}
