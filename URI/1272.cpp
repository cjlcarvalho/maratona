#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    cin.ignore();
    for(int j = 0; j<n; j++){
        getline(cin, s);
        for(int i = 0; i < s.size(); i++){
            if(islower(s[i]) && !islower(s[i-1])) 
                cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
