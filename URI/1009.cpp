#include <iostream>

using namespace std;

int main(){
    string name;
    double a, b;
    cin >> name >> a >> b;
    printf("TOTAL = R$ %.2f\n", (a + b * 0.15));
    return 0;
}
