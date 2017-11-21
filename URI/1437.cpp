#include <bits/stdc++.h>

using namespace std;

int main(){
    char pos, atual;
    int n;
    while(cin >> n, n){
        cin.ignore();
        atual = 'N';
        while(n--){
            cin >> pos;
            if(pos == 'D'){
                if(atual == 'N')
                    atual = 'L';
                else if(atual == 'L')
                    atual = 'S';
                else if(atual == 'S')
                    atual = 'O';
                else
                    atual = 'N';
            }
            else{
                if(atual == 'N')
                    atual = 'O';
                else if(atual == 'L')
                    atual = 'N';
                else if(atual == 'S')
                    atual = 'L';
                else
                    atual = 'S';
            }
        }
        cout << atual << endl;
    }
    return 0;
}
