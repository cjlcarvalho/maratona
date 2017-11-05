#include <bits/stdc++.h>

using namespace std;

int main(){
    int r1, x1, y1, r2, x2, y2;
    while(cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2){
        if(r1 >= (r2 + sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)))) cout << "RICO" << endl;
        else cout << "MORTO" << endl;
    }
    return 0;
}
