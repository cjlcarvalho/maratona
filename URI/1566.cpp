#include <bits/stdc++.h>
#define INF 30000000

using namespace std;

int altura[231];

int main(){
    int n, m, c, max;
    cin >> n;
    while(n--){
        cin >> m;
        memset(altura, 0, sizeof(altura));
        max = 0;
        for(int i = 0; i<m; i++){
            cin >> c;
            altura[c]++;
            if(c > max) max = c;
        }
        for(int i = 0; i<231; i++){
            while(altura[i]--){
                cout << i;
                if(i != max || altura[i])
                    cout << " ";
                else
                    cout << endl;
            }
        }
    }
    return 0;
}
