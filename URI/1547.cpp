#include <bits/stdc++.h>
#define INF 10000000

using namespace std;

int main(){
    int n, a, b, c, result, dif;
    cin >> n;
    while(n--){
        cin >> a >> b;
        dif = INF;
        result = 0;
        for(int i = 1; i<=a; i++){
            cin >> c;
            if(abs(c-b) < dif){
                result = i;
                dif = abs(c-b);
            }
        }
        cout << result << endl;
    }
    return 0;
}
