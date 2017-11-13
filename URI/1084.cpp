#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    while(scanf(" %d %d", &n, &m) != EOF){
        if(!n && !m) break;
        cin.ignore();
        string s;
        cin >> s;
        string t = s;
        sort(t.begin(), t.end());
        for(int i = 0; i < m; i++)
            s.erase(find(s.begin(), s.end(), t[i])); 
        cout << s << "\n";
    }
    return 0;
}
