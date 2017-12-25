#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, a, b, maior, nota, freq[9];
    cin >> n >> m;
    int teclas[n];
    for(int i = 0; i<n; i++) teclas[i] = 1;
    while(m--){
        cin >> a >> b;
        memset(freq, 0, 9 * sizeof(int));
        for(int i = a; i<=b; i++)
            freq[teclas[i]]++;
        maior = -1; nota = -1;
        for(int i = 0; i<9; i++){
            if(freq[i] > maior){
                maior = freq[i];
                nota = i;
            }
            else if(freq[i] == maior && i > nota)
                nota = i;
        }
        for(int i = a; i<=b; i++)
            teclas[i] = (teclas[i] + nota) % 9;
    }
    for(int i = 0; i<n; i++)
        cout << teclas[i] << endl;
    
    return 0;
}
