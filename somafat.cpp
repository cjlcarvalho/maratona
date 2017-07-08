#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned long resultm, resultn;
    vector<unsigned long> v;
    unsigned long m, n;
    while(cin >> m >> n){
        if(m >= 0 && m <= 20 && n >= 0 && n <= 20){
            resultm = 1;
            resultn = 1;
            m--;
            n--;
            while(m){
                resultm *= m;
                m--;
            }
            while(n){
                resultn *= n;
                n--;
            }
            cout << (resultm + resultn) << endl;
        }
    }
    return 0;
}
