#include <iostream>

using namespace std;

int main(){
    double soma = 0;
    for(double i = 1, j = 1; i <= 39; i+=2, j*=2)
        soma += (i/j);
    printf("%.2f\n", soma);
    return 0; 
}
