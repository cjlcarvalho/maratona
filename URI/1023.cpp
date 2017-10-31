#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, c = 1;
    while(cin >> n, n){
        map<int, int> pares;
        int x, y;
        double s1, s2;
        s1 = s2 = 0;
        for(int i = 0; i<n; i++){
            cin >> x >> y;
            s1 += x;
            s2 += y;
            if(pares.count(y / x))
                pares[y/x] += x;
            else
                pares[y/x] = x;
        }
        
        if(c > 1) cout << endl;
        cout << "Cidade# " << c << ":" << endl;
        for(auto i = pares.begin(); i != pares.end(); i++)
            cout << (*i).second << "-" << (*i).first << " ";
        cout << endl << fixed << setprecision(2);
        cout << "Consumo medio: " << floor((s2 / s1)*100)/100 << " m3." << endl;
        
        c+=1;
    }
    return 0;
}
