#include <bits/stdc++.h>

typedef unsigned long long ull;

using namespace std;

int main(){
    ull n, c;
    while(cin >> n){
        if(!n) {
            cout << n << endl;
            break;
        }
        string result;
        while(n){
            c = n % 32;
            if(c < 10)
                result.insert(result.begin(), c + 48);
            else
                result.insert(result.begin(), 65 + c - 10);
            n /= 32;
        }
        cout << result << endl;
    }
    return 0;
}
