#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n, m, k, l, s = 1;
    char c;
    int res[5] = { 0, 0, 0, 0, 0 };

    scanf(" %d %d %d", &n, &m, &k);

    int rhcp[n][m];
    memset(rhcp, 0, sizeof(rhcp));
    while(k--) {
        scanf(" %c %d", &c, &l);
        if(c == 'L') {
            for (int i = 0; i < m; i++)
                rhcp[l-1][i] = s;
        }
        else if (c == 'C') {
            for(int i = 0; i < n; i++)
                rhcp[i][l-1] = s;
        }
        s = (s + 1) % 5;
        if (!s) s = 1;
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            res[rhcp[i][j]]++;
    
    printf("R%d H%d C%d P%d\n", res[1], res[2], res[3], res[4]);
    return 0;
}
