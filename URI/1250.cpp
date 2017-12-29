#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t, total;
    string a;
    cin >> n;
    while(n--){
        total = 0;
        cin >> t;
        int vet[t];
        for(int i = 0; i<t; i++) cin >> vet[i];
        cin.ignore();
        cin >> a;
        for(int i = 0; i<t; i++){
            if(a[i] == 'S' && (vet[i] == 1 || vet[i] == 2))
                total++;
            else if(a[i] == 'J' && vet[i] > 2)
                total++;
        }
        cout << total << endl;
    }
    return 0;
}
