#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    string s[n];
    for(int i = 0; i<n; i++) getline(cin, s[i]);
    int total = 0;
    bool exist;
    for(int i = 0; i<n; i++){
        exist = false;
        for(int j = i - 1; j >= 0; j--){
            if(s[i] == s[j]){
                exist = true;
                break;
            }
        }
        if(!exist) total++;
    }
    cout << "Falta(m) " << 151 - total << " pomekon(s)." << endl;
    return 0;
}
