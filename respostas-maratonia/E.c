#include <stdio.h>

int main(){
    int x, j, k, i;
    int par[5];
    int impar[5];
    for(i = 0, j = 0, k = 0; i < 15; i++){
        scanf(" %d", &x);
        if(x % 2){
            impar[j] = x;
            j++;
        }
        else{
            par[k] = x;
            k++;
        }
        if(j == 5){
            for(int m = 0; m < 5; m++)
                printf("impar[%d] = %d\n", m, impar[m]);
            j = 0;
        }
        if(k == 5){
            for(int m = 0; m < 5; m++)
                printf("par[%d] = %d\n", m, par[m]);
            k = 0;
        }
    }
    for(int m = 0; m<j; m++)
        printf("impar[%d] = %d\n", m, impar[m]);
    for(int m = 0; m<k; m++)
        printf("par[%d] = %d\n", m, par[m]);
    return 0;
}
