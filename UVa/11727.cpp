#include <bits/stdc++.h>

using namespace std;

int middle(int a, int b, int c){
    if((a < b && a > c) || (a < c && a > b))
        return a;
    else if((b < a && b > c) || (b < c && b > a))
        return b;
    else if((c < a && c > b) || (c < b && c > a))
        return c;
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b, c;
    cin >> n;
    for(int i = 1; i<= n; i++){
        cin >> a >> b >> c;
        cout << "Case " << i << ": ";
        cout << middle(a, b, c) << endl;
    }
    return 0;
}
