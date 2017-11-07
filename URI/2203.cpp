#include <bits/stdc++.h>

using namespace std;

int main(){
    double xf, yf, xi, yi, vi, r1, r2;
    while(cin >> xf >> yf >> xi >> yi >> vi >> r1 >> r2){
        if(r1 + r2 >= sqrt(pow(xf - xi, 2) + pow(yf - yi, 2)) + 1.5 * vi)
            cout << "Y" << endl;
        else cout << "N" << endl;
    }
    return 0;
}
