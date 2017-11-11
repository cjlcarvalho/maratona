#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if(a && b)
        cout << "A" << endl;
    else if(a && !b)
        cout << "B" << endl;
    else if(!a)
        cout << "C" << endl;
    return 0;
}
