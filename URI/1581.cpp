#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    bool q;
    cin >> n;
    while(n--){
        cin >> m;
        cin.ignore();
        string s[m];
        for(int i = 0; i<m; i++) getline(cin, s[i]);
        q = false;
        for(int i = 0; i<m && !q; i++)
            for(int j = i + 1; j<m && !q; j++)
                if(s[i] != s[j]) q = true;
        if(q) cout << "ingles" << endl;
        else cout << s[0] << endl;
    }
    return 0;
}
