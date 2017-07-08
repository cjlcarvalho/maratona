#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, r;
    while(cin >> n >> r){
        int v[r];
        for(int i = 0; i<r; i++)
            cin >> v[i];
        int cont = 0;
        for(int i = 1; i<=n; i++){
            bool existe = false;
            for(int j = 0; j<r; j++)
                if(v[j] == i)
                    existe = true;
            if(!existe)
                cout << i << " ";
            else
                cont++;
        }
        if(cont == n)
            cout << "*";
        cout << endl;
    }
    return 0;
}
