#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    char C;
    while(cin >> n, n){
        vector<char> V, T;
        stack<char> S;
        for(int i = 0; i<n; i++){
            cin >> C;
            V.push_back(C);
        }
        for(int i = 0; i<n; i++){
            cin >> C;
            T.push_back(C);
        }
        while(!V.empty()){
            while(!V.empty() && *(V.begin()) != *(T.begin())){
                S.push(*(V.begin()));
                cout << "I";
                V.erase(V.begin());
            }
            if(!V.empty() && !T.empty()){
                cout << "IR";
                V.erase(V.begin());
                T.erase(T.begin());
            }
        }
        while(!S.empty() && !T.empty()){
            if(S.top() == *(T.begin())){
                cout << "R";
                S.pop();
                T.erase(T.begin());
            }
            else {
                cout << " Impossible";
                break;
            }
        }
        cout << endl;
    }
    return 0;
}
