#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, sum = 0;
    for(int i = 0; i<9; i++) {
        cin >> a;
        sum += a;
    }
    if(sum % 9 == 0)
        cout << "Rudolph";
    else if(sum % 9 == 1)
        cout << "Dasher";
    else if(sum % 9 == 2)
        cout << "Dancer";
    else if(sum % 9 == 3)
        cout << "Prancer";
    else if(sum % 9 == 4)
        cout << "Vixen";
    else if(sum % 9 == 5)
        cout << "Comet";
    else if(sum % 9 == 6)
        cout << "Cupid";
    else if(sum % 9 == 7)
        cout << "Donner";
    else if(sum % 9 == 8)
        cout << "Blitzen";
    cout << endl;
    return 0;
}
