#include <iostream>

using namespace std;

int main(){
    int inter, gremio, escolha;
    int ti, tg, te, total;
    ti = tg = te = total = 0;
    while(true){
        cin >> inter >> gremio;
        if(inter > gremio)
            ti++;
        else if(gremio > inter)
            tg++;
        else
            te++;
        total++;
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> escolha;
        if(escolha != 1)
            break;
    }
    cout << total << " grenais" << endl;
    cout << "Inter:" << ti << endl;
    cout << "Gremio:" << tg << endl;
    cout << "Empates:" << te << endl;
    if(ti > tg)
        cout << "Inter venceu mais" << endl;
    else if(tg > ti)
        cout << "Gremio venceu mais" << endl;
    else
        cout << "Nao houve vencedor" << endl;
    return 0;
}
