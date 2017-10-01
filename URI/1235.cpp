#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        string s;
        getline(cin, s);
        int metade = (int(s.size()) / 2) - 1;
        for(int i = metade; i>=0; i--)
            cout << s[i];
        for(int i = int(s.size()); i>metade; i--)
            cout << s[i];
        cout << '\0' << endl;
    }
    return 0;
}
