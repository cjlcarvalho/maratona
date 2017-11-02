#include <bits/stdc++.h>

using namespace std;

int64_t fat(int64_t n){
    if(n == 0 || n == 1) return 1;
    else return n * fat(n-1);
}

int main(){
    string s;
    while(cin >> s){
        if(s == "0") break;
        int64_t n = s.size();
        cout << fat(n) << endl;
    }
    return 0;
}
