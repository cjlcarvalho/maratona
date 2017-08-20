#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int x, y;
        cin >> x >> y;
        if(y == 0)
            printf("divisao impossivel\n");
        else if(x == 0)
            printf("%.1f\n", 0);
        else
            printf("%.1f\n", (double)x / (double)y);
    }
    printf("\n");
    return 0;
}
