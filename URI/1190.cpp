#include <iostream>

using namespace std;

int main(){
    double mat[12][12];
    char op;
    cin >> op;
    for(int i = 0; i<12; i++)
        for(int j = 0; j<12; j++)
            cin >> mat[i][j];
            
    double total = 0;
    int qt = 0;
    
    for(int i = 1; i<6; i++){
        for(int j = 12 - i; j<12; j++){
            total += mat[i][j];
            qt++;
        }   
    }
    int t = 7;
    for(int i = 6; i<12; i++){
        for(int j = t; j<12; j++){
            total += mat[i][j];
            qt++;
        } 
        t++;
    }
    
    if(op == 'S')
        printf("%.1f\n", total);
    else
        printf("%.1f\n", total/qt);
    return 0;
}
