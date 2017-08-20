#include <iostream>

using namespace std;

int main(){
    int n;
    int p = 0, s = 1, t;
    cin >> n;
    if(n >= 1)
        cout << p << " ";
    if(n >= 2)
        cout << s << " ";
    for(int i = 3; i <= n; i++){
        t = s;
        s += p;
        p = t;
        cout << s;
        if(i < n)
            cout << " ";
    }
    cout << endl;
    return 0;
}
