#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int m, x;
        cin >> m;
        while(m--){
            cin >> x;
            if(x == 1)
                cout << "Rolien";
            else if(x == 2)
                cout << "Naej";
            else if(x == 3)
                cout << "Elehcim";
            else if(x == 4)
                cout << "Odranoel";
            cout << endl;    
        }
    }
    return 0;
}
