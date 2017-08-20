#include <iostream>

using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << (((b > c) && (d > a) && ((c + d) > (a + b)) && c >= 0 && d >= 0 && (a % 2 == 0)) ? "Valores aceitos" : "Valores nao aceitos") << endl;
    return 0;
}
