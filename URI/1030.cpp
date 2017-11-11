#include <bits/stdc++.h>

using namespace std;

int solve(bool *vetor, int n, int t){
    int cont = t, current = n - 1, i, j;
    while(cont > 1){
        vetor[current] = true;
        cont--;
        for(i = current, j = n; j; ){
            if(i == t)
                i = 0;
            else if(vetor[i])
                i++;
            else{
                i++;
                j--;
            }
        }
        current = i;
    }
    return current;
}

int main(){
    int n, a, b;
    cin >> n;
    while(n--){
        cin >> a >> b;
        bool vetor[a];
        memset(vetor, false, sizeof(vetor));
        cout << solve(vetor, b, a) << endl;
    }
    return 0;
}
