#include <iostream>

using namespace std;

int main(){
    int n;
    double total = 0;
    int cont = 0;
    while(cin >> n){
        if(n < 0)
            break;
            
        total += n;
        cont ++;
    }
    printf("%.2f\n", total / cont);
    return 0;
}
