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
        for(int j = 0; j<i; j++){
            total += mat[i][j];
            qt++;
        }
    }
    
    for(int i = 6, t = 5; i < 11; i++, t--){
        for(int j = 0; j<t; j++){
            total += mat[i][j];
            qt++;
        }
    } 
    
    if(op == 'S')
        printf("%.1f\n", total);
    else
        printf("%.1f\n", total/qt);
    return 0;
}
