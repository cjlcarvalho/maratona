#include <iostream>

using namespace std;

int main(){
    double sal;
    cin >> sal;
    if(sal > 2000){
        printf("Novo salario: %.2f\n", sal + sal * 0.04);
        printf("Reajuste ganho: %.2f\n", sal*0.04);
        cout << "Em percentual: 4 %" << endl;
    }
    else if(sal > 1200){
        printf("Novo salario: %.2f\n", sal + sal * 0.07);
        printf("Reajuste ganho: %.2f\n", sal*0.07);
        cout << "Em percentual: 7 %" << endl;
    }
    else if(sal > 800){
        printf("Novo salario: %.2f\n", sal + sal * 0.1);
        printf("Reajuste ganho: %.2f\n", sal*0.1);
        cout << "Em percentual: 10 %" << endl;
    }
    else if(sal > 400){
        printf("Novo salario: %.2f\n", sal + sal * 0.12);
        printf("Reajuste ganho: %.2f\n", sal*0.12);
        cout << "Em percentual: 12 %" << endl;
    }
    else{
        printf("Novo salario: %.2f\n", sal + sal * 0.15);
        printf("Reajuste ganho: %.2f\n", sal*0.15);
        cout << "Em percentual: 15 %" << endl;
    }
    return 0;
}
