#include <bits/stdc++.h>

using namespace std;

bool valid(int n){
    return n != 11 && n != 88 && n != 99;
}

int dist(int a, int b){
    return abs(a - 0) + abs(b - 7);
}

int main(){
    int a;
    while(cin >> a){
        double mat[13][13];
        int x = -1, y = -1;
        double menorDistancia = 0;
        for(int i = 0; i<13; i++)
            for(int j = 0; j<13; j++)
                cin >> mat[i][j];
        for(int i = 0; i<13; i++){
            for(int j = 0; j<13; j++){
                if(mat[i][j] == 0){
                    double soma = 0, cont = 0;
                    for(int k = i - 1; k < 13 && k <= i + 1; k++){
                        if(k >= 0){
                          for(int l = j - 1; l < 13 && l <= j + 1; l++){
                            if(l >= 0 && !(k == i && l == j) && valid(mat[k][l])){
                                soma += mat[k][l];
                                cont++;
                            } 
                          }
                        }
                    } 
                    if(soma / cont < a){
                        if(x == -1 && y == -1){
                            x = i;
                            y = j;
                            menorDistancia = dist(i, j);     
                        }
                        else if(menorDistancia > dist(i, j)){
                            x = i;
                            y = j;
                            menorDistancia = dist(i, j);
                        }
                    }
                }
            }
        }
        cout << "linha > " << x + 1 << " coluna > " << y + 1 << endl;
    }
    return 0;
}
