#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

typedef struct n_node
{
    int value;
    struct n_node *next;
} Node;

Node* root = NULL;

Node* new_node(int value) {
    Node* node = (Node*) malloc(sizeof(Node));
    node->value = value;
    node->next = NULL;
    return node;
}

void enqueue(int value) {
    Node* node = new_node(value);
    if (root)
        node->next = root;
    root = node;
}

int dequeue() {
    if (root) {
        Node* r_node = root;
        int value = r_node->value;
        root = r_node->next;
        free(r_node);
        return value;
    }
    return -1;
}

int main()
{
    int n, m, inst, k, x, y, a, b, min_g, i, v, temp;
    char c;

    int emps[500];
    int mat[500][500];
    int visited[500];

    while (scanf("%d %d %d", &n, &m, &inst) != EOF) {
        memset(emps, 0, sizeof(emps));
        memset(mat, 0, sizeof(mat));

        for (i = 0; i < n; i++) {
            scanf("%d", &k);
            emps[i] = k;
        }

        for (i = 0; i < m; i++) {
            scanf("%d %d", &x, &y);
            mat[y - 1][x - 1] = 1;
        }

        while (inst--) {
            scanf("\n%c %d", &c, &a);
            if (c == 'T') {
                scanf(" %d", &b);
                for (i = 0; i < n; i++) {
                    temp = mat[a - 1][i];
                    mat[a - 1][i] = mat[b - 1][i];
                    mat[b - 1][i] = temp;
                }
                for (i = 0; i < n; i++) {
                    temp = mat[i][a - 1];
                    mat[i][a - 1] = mat[i][b - 1];
                    mat[i][b - 1] = temp;
                }
            }
            else if (c == 'P') {
                memset(visited, 0, sizeof(visited));

                min_g = INT_MAX;

                for (i = 0; i < n; i++)
                    if (mat[a - 1][i])
                        enqueue(i);

                visited[a - 1] = 1;

                while ((v = dequeue()) != -1) {
                    visited[v] = 1;
                    min_g = (min_g < emps[v]) ? min_g : emps[v];
                    for (i = 0; i < n; i++)
                        if (mat[v][i] && !visited[i])
                            enqueue(i);
                }

                if (min_g == INT_MAX)
                    printf("*\n");
                else
                    printf("%d\n", min_g);
            }
        }
    }

    return 0;
}
