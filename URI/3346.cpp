#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, b;

    scanf("%lf %lf", &a, &b);
    double result = ((((1.0 + a/100.00) * (1.0 + b/100.00)) - 1.0) * 100.0);
    printf("%lf\n", result);

    return 0;
}
