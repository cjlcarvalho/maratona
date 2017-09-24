#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string x;
    cin >> n;
    while(n--){
        cin >> x;
        if(x[0] == x[2])
            cout << int((x[0] - 48) * (x[2] - 48)) << endl;
        else if(x[1] >= 'A' && x[1] <= 'Z')
            cout << int((x[2] - 48) - (x[0] - 48)) << endl;
        else if(x[1] >= 'a' && x[1] <= 'z')
            cout << int((x[0] - 48) + (x[2] - 48)) << endl;
    }
    return 0;
}
