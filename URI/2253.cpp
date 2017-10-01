#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    while(getline(cin, s)){
        bool valid = true;
        if(s.size() < 6 || s.size() > 32)
            valid = false;
        else {
            int maius, minus, num;
            maius = minus = num = 0;
            for(char c : s){
                if(c >= 'A' && c <= 'Z')
                    maius++;
                else if(c >= 'a' && c <= 'z')
                    minus++;
                else if(c >= '0' && c <= '9')
                    num++;
                else
                    valid = false;
            }
            if(!num || !maius || !minus) valid = false;
        }
        if(valid)
            cout << "Senha valida." << endl;
        else
            cout << "Senha invalida." << endl;
    }
    return 0;
}
