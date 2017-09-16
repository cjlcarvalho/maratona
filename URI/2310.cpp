#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string nome;
    double s, b, a, s1, b1, a1, ts, tb, ta, ss, sb, sa;
    ts = tb = ta = ss = sb = sa = 0;
    cin >> n;
    while(n--){
        cin >> nome;
        cin >> s >> b >> a;
        ts += s;
        tb += b;
        ta += a;
        cin >> s1 >> b1 >> a1;
        ss += s1;
        sb += b1;
        sa += a1;
    }
    cout << fixed << setprecision(2);
    cout << "Pontos de Saque: " << ((ss / ts) * 100) << " %." << endl;
    cout << "Pontos de Bloqueio: " << ((sb / tb) * 100.0) << " %." << endl;
    cout << "Pontos de Ataque: " << ((sa / ta) * 100.0) << " %." << endl;
    return 0;
}
