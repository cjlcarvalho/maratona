#include <iostream>

using namespace std;

int main(){
    double v;
    int total = 0;
    double soma = 0;
    for(int i = 0; i<6; i++){
        cin >> v;
        if(v > 0){
            total++;
            soma += v;
        }
    }
    cout << total << " valores positivos" << endl;
    printf("%.1f\n", soma / total);
    return 0;
}
