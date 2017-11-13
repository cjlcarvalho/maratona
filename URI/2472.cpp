#include <bits/stdc++.h>

using namespace std;

int main(){
    int64_t n, m;
    cin >> n >> m;
    int64_t x = (n - (m - 1)) * (n - (m - 1)) + m - 1;
    cout << x << endl;
    return 0;  
}
