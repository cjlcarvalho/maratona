#include <stdio.h>

int main(){
    int n, current = -1, next, total = 10;
    scanf("%d", &n);
    while(n--){
        scanf(" %d", &next);
        if(current != -1){
            if(next - current <= 10) total += (next - current);
            else total += 10;
        }
        current = next;
    }
    printf("%d\n", total);
    return 0;
}
