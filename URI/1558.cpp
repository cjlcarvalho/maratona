#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        bool flag = false;
        int q = int(sqrt(n));
        for(int i = 0; i<=q && !flag; i++)
            for(int j = 0; j<=q && !flag; j++)
                if((i * i) + (j*j) == n) flag = true;
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
