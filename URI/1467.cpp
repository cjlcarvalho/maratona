#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    while(cin >> a >> b >> c){
        if(a != b && b == c)
            cout << "A" << endl;
        else if(b != a && a == c)
            cout << "B" << endl;
        else if(c != a && a == b)
            cout << "C" << endl;
        else
            cout << "*" << endl;
    }
    return 0;
}
