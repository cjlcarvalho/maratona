#include <iostream>

using namespace std;

int main(){
    double x, total = 0;
    int i = 0;
    while(i < 2){
        cin >> x;
        if(x < 0 || x > 10)
            cout << "nota invalida" << endl;
        else{
            total += x;
            i++;
        }
    }
    printf("media = %.2f\n", total / 2);
    return 0;
}
