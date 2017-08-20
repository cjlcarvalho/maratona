#include <iostream>

using namespace std;

int main(){
    int d;
    cin >> d;
    cout << d / 365 << " ano(s)" << endl;
    d %= 365;
    cout << d / 30 << " mes(es)" << endl;
    d %= 30;
    cout << d << " dia(s)" << endl;
    return 0;
}
