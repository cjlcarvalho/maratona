#include <iostream>

using namespace std;

int main(){
    int l;
    cin >> l;
    char t;
    cin >> t;
    double m[12][12];
    for(int i = 0; i<12; i++){
        for(int j = 0; j<12; j++){
            cin >> m[i][j];
        }
    }
    double soma = 0;
    for(int i = 0; i<12; i++)
        soma += m[i][l];
    if(t == 'S')
        printf("%.1f\n", soma);
    else
        printf("%.1f\n", soma / 12.0);
    return 0;
}
