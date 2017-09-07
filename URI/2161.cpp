#include <iostream>

using namespace std;

int main(){
    int n;
    double result = 3.0;
    double x = 0;
    cin >> n;
    while(n--)
        x = (1.0/(6.0 + x));
    printf("%.10f\n", result + x);
    return 0;
}
