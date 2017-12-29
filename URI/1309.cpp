#include <bits/stdc++.h>

using namespace std;

int main(){
    string a, b;
    while(getline(cin, a)){
        getline(cin, b);
        string result;
        for(int i = int(b.size()) - 1; i>=0; i--)
            result.insert(result.begin(), b[i]);
        if(b.size() == 1) result.insert(result.begin(), '0');
        result.insert(result.begin(), '.');
        for(int i = int(a.size()) - 1, cont = 1; i >= 0; i--, cont++){
            result.insert(result.begin(), a[i]);
            if(cont % 3 == 0 && i > 0) result.insert(result.begin(), ',');
        }
        result.insert(result.begin(), '$');
        cout << result << endl;
    }
    return 0;
}
