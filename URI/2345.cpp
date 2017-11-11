#include <bits/stdc++.h>

using namespace std;

int main(){
    int dif = 1000000;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(abs((a+b) - (c+d)) < dif)
        dif = abs((a+b) - (c+d));
    if(abs((a+c) - (b+d)) < dif)
        dif = abs((a+c) - (b+d));
    if(abs((a+d) - (b+c)) < dif)
        dif = abs((a+d) - (b+c));
    cout << dif << endl;
    return 0;
}
