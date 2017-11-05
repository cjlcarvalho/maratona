#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    string s[n];
    for(int i = 0; i<n; i++) {
        cin >> s[i];
        if(s[i].size() == 3){
            string t = s[i].substr(0, 2);
            if(t == "OB" || t == "UR") s[i][2] = 'I';
        }
    }
    for(int i = 0; i<n; i++){
        cout << s[i];
        if(i == n - 1) cout << endl;
        else cout << ' ';
    }
    return 0;
}
