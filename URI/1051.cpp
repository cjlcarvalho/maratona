#include <iostream>

using namespace std;

int main(){
    double v;
    cin >> v;
    double total = 0;
    double temp;
    if(v > 4500){
        temp = v - 4500;
        total += temp * 0.28;
        v -= temp;
    }
    if(v > 3000){
        temp = v - 3000;
        total += temp * 0.18;
        v -= temp;
    }
    if(v > 2000){
        temp = v - 2000;
        total += temp * 0.08;
        v -= temp;
    }
    if(total == 0)
        cout << "Isento" << endl;
    else
        printf("R$ %.2f\n", total);
    return 0;
}
