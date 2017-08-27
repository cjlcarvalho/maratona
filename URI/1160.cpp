#include <iostream>

using namespace std;

int main(){
    int n;
    int pa, pb;
    double ga, gb;
    cin >> n;
    while(n--){
        int cont = 0;
        cin >> pa >> pb >> ga >> gb;
        while(pb >= pa && cont <= 100){
            pa = pa + (pa * (ga/100));
            pb = pb + (pb * (gb/100));
            cont++;
        }
        if(cont > 100)
            cout << "Mais de 1 seculo." << endl;
        else
            cout << cont << " anos." << endl;
    }
    return 0;
}
