#include <bits/stdc++.h>

using namespace std;

int solve(int v[], int t[], int i, int cont, int n, int h){
    if(i > n)
        return 0;
    else if(t[i] + cont > h)
        return 0;
    else if(t[i] + cont < h){ 
        return min(v[i] + solve(v, t, i + 1, t[i] + cont, n, h), solve(v, t, i + 1, cont, n, h));  
    }
    else if(t[i] + cont == h)
        return v[i];
    return 0;
}

int main(){
    int n, h;
    while(cin >> n >> h){
        int v[n], t[n];
        for(int i = 0; i<n; i++)
            cin >> v[i] >> t[i];
        int min = solve(v, t, 0, 0, n, h);
        cout << min << endl;
    }
    return 0;
}
