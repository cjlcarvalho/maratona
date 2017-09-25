#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        if(!n) break;
        int max1, max2, c1, c2, a;
        max1 = max2 = c1 = c2 = -1;
        for(int i = 1; i<=n; i++){
            cin >> a;
            if(c1 == -1){
                c1 = a;
                max1 = i;
            }
            else if(a > c1){
                c2 = c1;
                max2 = max1;
                c1 = a;
                max1 = i;
            }
            else if(c2 == -1 || a > c2){
                c2 = a;
                max2 = i;
            }
        }
        if(max2 == -1)
            cout << max1 << endl;
        else
            cout << max2 << endl;
    }
    return 0;
}
