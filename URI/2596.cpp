#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, c, d;
    cin >> n;
    while(n--){
        cin >> m;
        c = 0;
        for(int i = 1; i<=m; i++){
            d = 0;
            for(int j = 1; j <= i; j++)
                if(!(i % j)) d++;
            if(!(d % 2)) c++;
        }
        cout << c << endl;
    }
    return 0;
}
