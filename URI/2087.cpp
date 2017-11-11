#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin >> n, n){
        cin.ignore();
        string s[n];
        for(int i = 0; i<n; i++) cin >> s[i];
        bool check = false;
        for(int i = 0; i<n && !check; i++){
            for(int j = i + 1; j < n && !check; j++){
                if(s[i].size() < s[j].size()){
                    if(s[j].substr(0, s[i].size()) == s[i])
                        check = true;
                }
                else if(s[i].size() == s[j].size()){
                    if(s[i] == s[j])
                        check = true;
                }
                else {
                    if(s[i].substr(0, s[j].size()) == s[j])
                        check = true;
                }
            }
        }
        if(check) cout << "Conjunto Ruim" << endl;
        else cout << "Conjunto Bom" << endl;
    }
    return 0;
}
