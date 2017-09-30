#include <bits/stdc++.h>

using namespace std;

int main(){
    double n, f;
    bool x;
    while(cin >> n){
        f = 0;
        for(int i = 0; i<n; i++){
            cin >> x;
            if(x) f++;
        }
        if(f >= 2*(n/3))
            cout << "impeachment" << endl;
        else
            cout << "acusacao arquivada" << endl;
    }
    return 0;
}
