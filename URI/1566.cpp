#include <bits/stdc++.h>

using namespace std;

int altura[231];

void limpar(){
    memset(altura, 0, sizeof(altura));
}

int main(){
    int n, m, a, max;
    scanf(" %d", &n);
    while(n--){
        scanf(" %d", &m);
        limpar();
        max = -1;
        for(int i = 0; i<m; i++) {
            scanf(" %d", &a);
            if(max < a)
                max = a; 
            altura[a]++;
        }
        for(int i = 20; i<=max; i++){
            for(int j = 0; j < altura[i]; j++){
                printf("%d", i);
                if(!(j == altura[i] - 1 && i == max)) printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
