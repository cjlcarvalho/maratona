#include <iostream>

using namespace std;

int main(){
    int a1, b1, a2, b2;
    double d1, d2;
    cin >> a1 >> b1 >> d1 >> a2 >> b2 >> d2;
    printf("VALOR A PAGAR: R$ %.2f\n", b1 * d1 + b2 * d2);
    return 0;
}
