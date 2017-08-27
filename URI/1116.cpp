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
        else
            printf("%.1f\n", ((double)x/(double)y));
    }
    return 0;
}
