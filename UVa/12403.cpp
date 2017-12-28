#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main(){
    int n;
    string s;
    ull a, total = 0;
    cin >> n;
    while(n--){
        cin.ignore();
        cin >> s;
        if(s == "donate"){
            cin >> a;
            total += a;
        }
        else if(s == "report")
            cout << total << endl;
    }
    return 0;
}
