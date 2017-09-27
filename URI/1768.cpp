#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        int inicio, fim;
        inicio = fim = n / 2;
        while(inicio >= 0 && fim < n){
            for(int i = 0; i<=fim; i++){
                if(i < inicio)
                    cout << ' ';
                else
                    cout << '*';
            }
            cout << endl;
            inicio--;
            fim++;
        }
        inicio = fim = n / 2;
        for(int i = 0; i<2; i++){
            for(int i = 0; i<=fim; i++){
                if(i < inicio)
                    cout << ' ';
                else
                    cout << '*';
            }
            cout << endl;
            inicio--;
            fim++;
        }
        cout << endl;
    }
    return 0;
}
