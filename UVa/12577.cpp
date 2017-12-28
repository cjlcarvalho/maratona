#include <bits/stdc++.h>

using namespace std;

int main(){
    string a;
    for(int i = 1; ;i++){
        cin >> a;
        if(a == "*") break;
        cout << "Case " << i << ": ";
        if(a == "Hajj")
            cout << "Hajj-e-Akbar";
        else if(a == "Umrah")
            cout << "Hajj-e-Asghar";
        cout << endl;
    }
    return 0;
}
