#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int total = a + d;
    for(int i = a + 1; i <= total; i++){
        if(i % 2)
            b -= c;
        else
            b += c;
    }
    cout << b << endl;
    return 0;
}
