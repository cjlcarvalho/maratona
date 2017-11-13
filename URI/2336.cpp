#include <bits/stdc++.h>

using namespace std;

int64_t solve(string s){
    int base = 1;
    uint64_t result = 0;
    for(int i = int(s.size()) - 1; i>=0; i--){
        result += (((s[i] - 65) * (base % 1000000007LL)) % 1000000007LL);
        base *= 26;
    }
    return result % 1000000007LL;
}

int main(){
    string s;
    while(cin >> s)
        cout << solve(s) << endl;
    return 0;
}
