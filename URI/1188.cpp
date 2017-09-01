#include <bits/stdc++.h>

using namespace std;

int main(){
    double mat[12][12];
    char op;
    cin >> op;
    for(int i = 0; i < 12; i++)
        for(int j = 0; j<12; j++)
            cin >> mat[i][j];
            
    double total = 0;
    int qt = 0;        
    int t = 5;
    for(int i = 7; i < 12; i++){
        for(int j = t; j < i; j++){
            total += mat[i][j];
            qt++;
        }
        t--;
    }
    if(op == 'S')
        printf("%.1f\n", total);
    else
        printf("%.1f\n", total/qt);
    return 0;
}
