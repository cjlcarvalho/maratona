#include <stdio.h>

int main(){
    int n, a, b;
    scanf(" %d", &n);
    while(n--){
        scanf(" %dx%d", &a, &b);
        if(a == b)
            for(int i = a; i<=10; i++)
                printf("%d x %d = %d\n", a, i, a*i);
        else {
            int m = max(a, b);
            for(int i = m; i<=10; i++){
                printf("%d x %d = %d && %d x %d = %d\n", a, i, a*i, b, i, b*i);
            }
        }
    }
    return 0;
}
