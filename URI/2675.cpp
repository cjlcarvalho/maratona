#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        int a, soma = 0;
        vector<int> q;
        for(int i = 0; i<n; i++){
            cin >> a;
            while(!q.empty()){
                int current = q.back();
                if(current < a)
                    break;
                else {
                    soma += current;
                    q.pop_back();
                }
            }
            q.push_back(a);
        }
        if(n)
            cout << soma << endl;
    }
    return 0;
}
