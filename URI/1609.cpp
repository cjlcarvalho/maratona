#include <bits/stdc++.h>

using namespace std;

int main(){
    long n, x, c;
    cin >> n;
    while(n--){
        set<long> s;
        cin >> x;
        while(x--){
            cin >> c;
            s.insert(s.end(), c);
        }
        cout << s.size() << endl;
    }
    return 0;
}
