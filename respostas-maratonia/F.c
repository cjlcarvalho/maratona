#include <stdio.h>
#include <string.h>

int main(){
    int n, x;
    char a[50];
    scanf(" %d", &n);
    while(n--){
        scanf(" %s %d", a, &x);
        for(int i = 0; i<strlen(a); i++){
            for(int j = 0; j<x; j++){
                a[i]--;
                if(a[i] < 'A')
                    a[i] = 'Z';
            }
        }
        puts(a);
    }
    return 0;
}
