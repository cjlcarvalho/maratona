#include <iostream>

using namespace std;

int main(){
    int n, am;
    char animal;
    int total, tc, tr, ts;
    total = tc = tr = ts = 0;
    cin >> n;
    while(n--){
        cin >> am >> animal;
        switch(animal){
            case 'C': tc += am; break;
            case 'R': tr += am; break;
            case 'S': ts += am; break;
        }
        total += am;
    }
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << tc << endl;
    cout << "Total de ratos: " << tr << endl;
    cout << "Total de sapos: " << ts << endl;
    printf("Percentual de coelhos: %.2f \%\n", ((double)tc/(double)total)*100);
    printf("Percentual de ratos: %.2f \%\n", ((double)tr/(double)total)*100);
    printf("Percentual de sapos: %.2f \%\n", ((double)ts/(double)total)*100);
    return 0;
}
