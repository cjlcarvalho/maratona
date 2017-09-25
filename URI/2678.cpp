#include <bits/stdc++.h>

using namespace std;

int main(){
    char x[300];
    while(cin.getline(x, 300)){
        for(int i = 0; x[i]; i++){
            if((x[i] >= 'A' && x[i] <= 'C') || (x[i] >= 'a' && x[i] <= 'c'))
                cout << 2;
            else if((x[i] >= 'D' && x[i] <= 'F') || (x[i] >= 'd' && x[i] <= 'f'))
                cout << 3;
            else if((x[i] >= 'G' && x[i] <= 'I') || (x[i] >= 'g' && x[i] <= 'i'))
                cout << 4;
            else if((x[i] >= 'J' && x[i] <= 'L') || (x[i] >= 'j' && x[i] <= 'l'))
                cout << 5;
            else if((x[i] >= 'M' && x[i] <= 'O') || (x[i] >= 'm' && x[i] <= 'o'))
                cout << 6;
            else if((x[i] >= 'P' && x[i] <= 'S') || (x[i] >= 'p' && x[i] <= 's'))
                cout << 7;
            else if((x[i] >= 'T' && x[i] <= 'V') || (x[i] >= 't' && x[i] <= 'v'))
                cout << 8;
            else if((x[i] >= 'W' && x[i] <= 'Z') || (x[i] >= 'w' && x[i] <= 'z'))
                cout << 9;
            else if(x[i] != '-'){
                if(x[i] >= '0' && x[i] <= '9')
                    cout << x[i];
                else if(x[i] == '*' || x[i] == '#')
                    cout << x[i];
            }
        }
        cout << endl;
    }
    return 0;
}
