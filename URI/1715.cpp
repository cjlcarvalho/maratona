#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, c;
    cin >> n >> m;
    int total = 0;
    while(n--){
        bool check = true;
        for(int i = 0; i<m; i++){
            cin >> c;
            if(!c) check = false;
        }
        if(check) total++;
    }
    cout << total << endl;
    return 0;
}
