#include <stdio.h>

int main(){
    long x, y;
    while(scanf(" %ld %ld", &x, &y))
        printf("%ld\n", x ^ y);
    return 0;
}
