#include <iostream>

using namespace std;

int main(){
    int n, x;
    double y;
    cin >> n;
    int maior = 0;
    double nota = 0;
    bool flag = false;
    while(n--){
        cin >> x >> y;
        if(!flag && y >= 8){
            maior = x;
            nota = y;
            flag = true;
        }
        else if(flag && y >= 8 && y > nota){
            maior = x;
            nota = y;
        }
    }
    if(!flag)
        cout << "Minimum note not reached" << endl;
    else
        cout << maior << endl;
    return 0;
}
