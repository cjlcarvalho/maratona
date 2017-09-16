#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        double b, ad, dd, ag, dg;
        int ld, lg;
        cin >> b >> ad >> dd >> ld >> ag >> dg >> lg;
        double totald, totalg;
        totald = totalg = 0;
        if(ld % 2 == 0)
            totald += b;
        if(lg % 2 == 0)
            totalg += b;
            
        totald += (ad + dd) / 2;
        totalg += (ag + dg) / 2;
        
        if(totald > totalg)
            cout << "Dabriel" << endl;
        else if(totald < totalg)
            cout << "Guarte" << endl;
        else
            cout << "Empate" << endl;
    }
    return 0;
}
