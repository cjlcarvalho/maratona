#include <stdio.h>
#include <string.h>

int main(){
    char a[1000];
    int p = 0;
    scanf(" %[^\n]s", a);
    for(int i = 1; i<strlen(a); i++){
        if(a[i] != ' '){
            if(!p)
                printf("%c", a[i]);
            p = !p;
        }
        else
            printf("%c", a[i]);
    }
    printf("\n");
    return 0;
}
