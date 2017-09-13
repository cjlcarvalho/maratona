#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, p;
    string a;
    cin >> n >> p;
    while(p--){
        cin >> a;
        if(a == "fechou")
            n++;
        else if(a == "clicou")
            n--;
    }
    cout << n << endl;
    return 0;
}
