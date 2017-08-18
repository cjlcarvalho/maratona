#include <bits/stdc++.h>

using namespace std;

int64_t fat(int64_t n){
    int64_t result = 1;
    for(int i = 1; i<=n; i++)
        result *= i;
    return result;
}

int main(){
    int64_t m, n;
    while(cin >> m >> n)
        cout << fat(m) + fat(n) << endl;
    return 0;
}
