#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    string b, c;
    while(getline(cin, b)){
        if(b[0] < ' ') break;
        getline(cin, c);
        a = 0;
        for(int i = 0; i < int(b.size()); i++)
            for(int j = 0; j < int(c.size()); j++)
                if(b[i] == c[j]) a++;
        cout << a << endl;
    }
    return 0;
}
