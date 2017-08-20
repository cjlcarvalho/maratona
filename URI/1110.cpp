#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        if(n == 0)
            break;
        vector<int> v, d;
        for(int i = 1; i<=n; i++)
            v.push_back(i);
        while(v.size() > 1){
            d.push_back(v[0]);
            v.erase(v.begin());
            int troca = v[0];
            for(int i = 1; i<v.size(); i++)
                v[i-1] = v[i];
            v[v.size() - 1] = troca;
        }
        cout << "Discarded cards: ";
        for(int i = 0; i<d.size(); i++){
            cout << d[i];
            if(i < d.size() - 1)
                cout << ", ";
        }
        cout << "\nRemaining card: " << v[0] << endl;
    }
    return 0;
}
