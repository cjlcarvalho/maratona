#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    double x = pow(((1 + sqrt(5))/2), n);
    double y = pow(((1 - sqrt(5))/2), n);
    double z = (x - y)/sqrt(5);
    printf("%.1f\n", z);
    return 0;
}
