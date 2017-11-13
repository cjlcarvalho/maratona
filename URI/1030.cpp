#include <bits/stdc++.h>

using namespace std;

int solve(int a, int b){
    if(a == 1) return 1;
    else return ((b - 1) + solve(a-1, b)) % a + 1;
}

int main(){
    int n, a, b, t = 1;
    cin >> n;
    while(n--){
        cin >> a >> b;
        cout << "Case " << t << ": " << solve(a, b) << endl;
        t++;
    }
    return 0;
}
