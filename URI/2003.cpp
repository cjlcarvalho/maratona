#include <bits/stdc++.h>

using namespace std;

int main(){
    int h, m;
    char pontos;
    while(cin >> h >> pontos >> m){
        
        h++;
        
        if(h >= 5 && h <= 8){
            if(h == 8 && m > 0)
                cout << "Atraso maximo: " << m << endl;
            else
                cout << "Atraso maximo: " << 0 << endl;
        }
        else{
            int total = ((h - 8) * 60) + m;
            cout << "Atraso maximo: " << total << endl;
        }

    }
    return 0;
}
