#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y, i;
    cin >> x >> y;
    for(i = 1;;i++)
        if(((y * i) - (x * i)) >= y)
            break;
    cout << i << endl;
    return 0; 
}
