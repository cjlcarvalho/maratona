#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        double t, d, media = 0;
        vector<int> v;
        for(int i = 1; i<=n; i++){
            cin >> t >> d;
            if(d / t > media || media == 0){
                media = d / t;
                v.push_back(i);
            }
        }
        for(int i : v)
            cout << i << endl;
    }
    return 0;
}
