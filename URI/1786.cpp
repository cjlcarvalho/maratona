#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    while(getline(cin, s)){
        int c = 0, d = 0;
        for(int i = 0; i < 9; i++){
            c += (s[i] - 48) * (i+1);
            d += (s[i] - 48) * (9-i);
        }
        c %= 11;
        c = (c == 10) ? 0 : c;
        d %= 11;
        d = (d == 10) ? 0 : d;
        cout << s[0] << s[1] << s[2] << '.' << s[3] << s[4] << s[5] << '.' << s[6] << s[7] << s[8] << '-' << c << d << endl;
    }
    return 0;
}   
