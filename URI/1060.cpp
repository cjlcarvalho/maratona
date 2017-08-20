#include <iostream>

using namespace std;

int main(){
    double a, b, c, d, e, f;
    int total = 0;
    cin >> a >> b >> c >> d >> e >> f;
    if(a > 0)
        total++;
    if(b > 0)
        total++;
    if(c > 0)
        total++;
    if(d > 0)
        total++;
    if(e > 0)
        total++;
    if(f > 0)
        total++;
    cout << total << " valores positivos" << endl;
    return 0;
}
