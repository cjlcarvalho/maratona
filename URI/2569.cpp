#include <bits/stdc++.h>

using namespace std;

int solve(int n){
    int base = 1;
    int total = 0;
    while(n){
        int t = n % 10;
        if(t != 7)
            total += t * base;
        base *= 10;
        n /= 10;
    }
    return total;
}

int main(){
    int n, m;
    char c;
    cin >> n >> c >> m;
    if(c == '+')
        cout << solve(solve(n) + solve(m)) << endl;
    else
        cout << solve(solve(n) * solve(m)) << endl;
    return 0;
}
