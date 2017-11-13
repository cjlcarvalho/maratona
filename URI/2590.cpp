#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    long a;
    scanf(" %d", &n);
    while(n--){
        scanf(" %ld", &a);
        if(a % 4 == 0)
            printf("1\n");
        else if(a % 4 == 1)
            printf("7\n");
        else if(a % 4 == 2)
            printf("9\n");
        else
            printf("3\n");
    }
    return 0;
}
