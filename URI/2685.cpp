#include <stdio.h>

int main(){
    int m;
    while(scanf(" %d", &m) != EOF){
        m %= 360;
        if(m < 90) printf("Bom Dia!!\n");
        else if(m < 180) printf("Boa Tarde!!\n");
        else if(m < 270) printf("Boa Noite!!\n");
        else printf("De Madrugada!!\n");
    }
    return 0;
}
