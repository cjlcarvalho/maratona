#include <bits/stdc++.h>

using namespace std;

int main(){
    char c;
    double x;
    cin >> x;
    if(!signbit(x))
        printf("+");
    printf("%.4E\n", x);
    return 0;
}
