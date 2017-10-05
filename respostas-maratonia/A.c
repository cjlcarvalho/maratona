#include <stdio.h>

int main(){
    int S, N, C, Q;
    S = N = 0;
    scanf(" %d", &Q);
    while(Q--){
        scanf(" %d", &C);
        if(C) N++;
        else S++;
    }
    if(S > N)
        printf("Y\n");
    else
        printf("N\n");
    return 0;
}
