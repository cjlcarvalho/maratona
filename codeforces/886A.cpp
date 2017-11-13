#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    if(a + b + c == d + e + f)
        cout << "YES" << endl;
    else if(a + b + d == c + e + f)
            cout << "YES" << endl;
    else if(a + b + e == c + d + f)
            cout << "YES" << endl;
    else if(a + b + f == c + d + e)
            cout << "YES" << endl;
    else if(a + c + d == b + e + f)
        cout << "YES" << endl;
    else if(a + c + e == b + d + f)
        cout << "YES" << endl;
    else if(a + c + f == b + d + e)
        cout << "YES" << endl;
    else if(b + c + d == a + e + f)
            cout << "YES" << endl;
    else if(b + c + e == a + d + f)
            cout << "YES" << endl;
    else if(b + c + f == a + d + e)
            cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
