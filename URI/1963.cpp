#include <iostream>

using namespace std;

int main(){
    double x, y;
    cin >> x >> y;
    double total = ((y - x)/x * 100);
    printf("%.2f\%\n", total);
    return 0;
}
