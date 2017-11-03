#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, v = 0;
    while(cin >> n, n){
        bool c = false;
        while(1){
            stack<int> S, X;
            int V[n];
            for(int i = 0; i<n; i++){
                cin >> V[i];
                if(!V[i]){
                    c = true;
                    break;
                }   
            }
            if(c) {
                cout << endl;
                break;
            }  
            for(int i = n - 1; i >= 0; i--){
                while(!S.empty() && S.top() >= V[i]){
                    X.push(S.top());
                    S.pop();
                }
                S.push(V[i]);   
            }
            while(!S.empty()){
                X.push(S.top());
                S.pop();
            }
            bool b = true;
            if(!X.empty()){
                v = X.top();
                X.pop();
            }
            while(!X.empty()){
                if(X.top() < v)
                    b = false;
                v = X.top();
                X.pop();
            }
            if(b) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}
