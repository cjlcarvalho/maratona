#include <bits/stdc++.h>

using namespace std;

int main(){
    int maior, a, b;
    char op;
    cin >> maior;
    cin >> a >> op >> b;
    if(op == '+'){
        if((a + b) > maior)
            cout << "OVERFLOW" << endl;
        else
            cout << "OK" << endl;
    }
    else if(op == '*'){
        if((a * b) > maior)
            cout << "OVERFLOW" << endl;
        else
            cout << "OK" << endl;
    }
    return 0;
}
