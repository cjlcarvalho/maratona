#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t = 1;
    while(cin >> n, n >= 0)
        cout << "Case " << t++ << ": " << ceil(log(n)/log(2)) << endl;
    return 0;
}
