#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);
    int result = n * n;
    int a, b;
    if (!(result % 2)) {
        a = result / 2;
        b = result / 2;
    }
    else {
        a = result / 2 + 1;
        b = result / 2;
    }
    printf("%d casas brancas e %d casas pretas\n", a, b);

    return 0;
}
