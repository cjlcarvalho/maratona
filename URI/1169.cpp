#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    uint64_t q, t = 1;
    cin >> n;
    while(n--){
        cin >> q;
        if(q == 64)
            cout << "1537228672809129 kg" << endl; // overflow maldito
        else
            cout << ((t << q) / 12)/1000 << " kg" << endl;
    }
    return 0;
}
