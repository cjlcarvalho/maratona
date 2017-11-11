#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int n;
    while(getline(cin, s)){
        bool exist = false;
        for(int i = s.size() - 1; i >= 0; i--){
            n = s.size() - i;
            if(i - n >= 0){
                if(s.substr(i, n) == s.substr(i - n, n)){
                    cout << s.substr(0, i) << endl;
                    exist = true;
                    break;
                }
            }
        }
        if(!exist) cout << s << endl;
    }
    return 0;
}
