#include <bits/stdc++.h>

using namespace std;

int main(){
    int q, d, p;
    vector<int> v;
    while(cin >> q){
        if(q == 0)
            break;
        cin >> d >> p;
        int mult = q * p;
        while(((mult/q) - (mult/p)) < d)
            mult += mult;
        v.push_back(mult);
    }
    for(vector<int>::iterator i = v.begin(); i != v.end(); ++i)
        cout << *i << ((*i == 1) ? " pagina" : " paginas") << endl;
    return 0;
}
