#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, a, x, c, d, e;
    cin >> n;
    while(n--){
        cin >> m;
        int vet[m][60];
        memset(vet, 0, sizeof(vet));
        for(int i = 0; i<m; i++){
            cin >> a;
            for(int j = 0; j<a; j++) cin >> vet[i][j];
        }
        cin >> x;
        while(x--){
            cin >> c >> d >> e;
            set<int> s;
            if(c == 1){
                for(int i = 0; vet[d - 1][i] && i < 60; i++){
                    for(int j = 0; vet[e - 1][j] && j < 60; j++)
                        if(vet[d - 1][i] == vet[e - 1][j]) {
                            s.insert(vet[d - 1][i]);
                            break;
                        }
                }
            }
            else if(c == 2){
                for(int i = 0; i < 60; i++){
                    if(vet[d-1][i])
                        s.insert(vet[d - 1][i]);
                    if(vet[e-1][i])
                        s.insert(vet[e-1][i]);
                    if(!vet[d-1][i] && !vet[e-1][i]) break;
                }
            }
            cout << s.size() << endl;
        }
    }
    return 0;
}
