#include <bits/stdc++.h>

using namespace std;

int main(){
    string a;
    bool check = false;
    while(getline(cin, a)){
        for(int i = a.size() - 1, k = 0; i >= 0; i--, k++){
            for(int j = 0; j<k; j++) cout << " ";
            for(int j = 0; j<= i; j++){
                cout << a[j];
                if(j != i) cout << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
