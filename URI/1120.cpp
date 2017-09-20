#include <bits/stdc++.h>

using namespace std;

int main(){
    char d;
    string n;
    while(cin >> d >> n){
        if(d == '0' && n == "0") break;
        for(unsigned int i = 0; i<n.size(); i++){
            if(n[i] == d){
                n.erase(n.begin() + i);
                i--;
            }
        }
        
        int i = 0;
        while(n[i] == '0')
            n.erase(n.begin() + i);
        if(n.size() == 0)
            cout << "0" << endl;
        else
            cout << n << endl;
    }
    return 0;
}
