#include <iostream>

using namespace std;

void ord_par(int* arr, int s){
    for(int i = s - 1; i>=0; i--){
        for(int j = 0; j<i; j++){
            if(arr[j] > arr[j+1]){
                int troca = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = troca;
            }
        }
    }
}

void ord_imp(int* arr, int s){
    for(int i = s - 1; i>= 0; i--){
        for(int j = 0; j<i; j++){
            if(arr[j] < arr[j+1]){
                int troca = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = troca;
            }
        }
    }
}


int main(){
    int n, x;
    int cp, ci;
    cp = ci = 0;
    cin >> n;
    int par[n] = {};
    int impar[n] = {};
    while(n--){
       cin >> x;
       if(x % 2 == 0){
           par[cp] = x;
           cp++;
       }
       else{
           impar[ci] = x;
           ci++;
       }
    }
    ord_par(par, cp);
    ord_imp(impar, ci);
    for(int i = 0; par[i]; i++)
        cout << par[i] << endl;
    for(int i = 0; impar[i]; i++)
        cout << impar[i] << endl;
    return 0;
}
