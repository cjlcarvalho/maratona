#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b;
    scanf(" %d", &n);
    while(n--){
        scanf(" %dx%d", &a, &b);
        if(a == b)
            for(int i = 5; i<=10; i++)
                printf("%d x %d = %d\n", a, i, a*i);
        else {
            for(int i = 5; i<=10; i++)
                printf("%d x %d = %d && %d x %d = %d\n", a, i, a*i, b, i, b*i);
        }
    }
    return 0;
}
