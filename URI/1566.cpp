#include <bits/stdc++.h>

using namespace std;

int vet[231];

bool next(int i)
{
    for (int j = i; j < 231; j++)
        if (vet[j] > 0)
            return true;
    return false;
}

int main()
{
    long n, p, a;
    scanf("%ld", &n);
    
    while (n--) {
        scanf("%ld", &p);
        
        while(p--) {
            scanf("%ld", &a);
            vet[a]++;
        }
        
        for (int i = 20; i < 231; i++) {
            while (vet[i] > 0) {
                vet[i]--;
                printf("%d%s", i, (next(i) ? " " : "\n"));
            }
        }
    }
    
    return 0;
}
