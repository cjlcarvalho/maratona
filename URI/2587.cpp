#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        string a, b, c;
        int f = 0, s = 0;
        getline(cin, a);
        getline(cin, b);
        getline(cin, c);
        unsigned int i;
        for(i = 0; i < c.size(); i++)
            if(c[i] == '_'){
                f = i;
                break;
            }
        for(i = i + 1; i<c.size(); i++)
            if(c[i] == '_'){
                s = i;
                break;
            }
        if(a[f] == b[s] || a[s] == b[f])
            cout << 'Y' << endl;
        else
            cout << 'N' << endl;
    }
    return 0;
}
