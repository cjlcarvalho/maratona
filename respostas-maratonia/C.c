#include <stdio.h>
#include <string.h>

int main(){
    char a[50];
    while(scanf(" %[^\n]s", a)){
        int maius = 1;
        for(int i = 0; i<strlen(a); i++){
            if(a[i] != ' '){
                if(a[i] >= 'a' && a[i] <= 'z' && maius)
                    a[i] -= 32;
                if(a[i] >= 'A' && a[i] <= 'Z' && !maius)
                    a[i] += 32;
                maius = !maius;
            }
        }
        puts(a);
    }
    return 0;
}
