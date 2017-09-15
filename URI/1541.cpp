#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    while(cin >> a){
        if(a == 0) break;
        cin >> b >> c;
        int result = (int)sqrt(a * b * (100.0/c));
        cout << result << endl;
    }
    return 0;
}
