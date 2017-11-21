#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int result = 0;
    if(a - d < 0)
        result += abs(a-d);
    if(b - e < 0)
        result += abs(b-e);
    if(c - f < 0)
        result += abs(c-f);
    cout << result << endl;
    return 0;
}
