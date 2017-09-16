#include <bits/stdc++.h>

using namespace std;

bool comp(int i, int j){
    return i > j;
}

int main(){
    int n, q;
    while(cin >> n >> q){
        int h[n], c[q];
        for(int i = 0; i<n; i++) cin >> h[i];
        for(int i = 0; i<q; i++) cin >> c[i];
        vector<int> v(h, h + n);
        // experimentando o sort
        sort(v.begin(), v.end(), comp);
        for(int i = 0; i<q; i++)
            cout << v[(c[i] - 1)] << endl;
    }
    return 0;
}
