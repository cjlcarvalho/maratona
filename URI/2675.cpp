#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(scanf(" %d", &n) != EOF){
        int a;
        uint64_t soma = 0LL;
        stack<int> q;
        for(int i = 0; i<n; i++){
            cin >> a;
            while(!q.empty()){
                int current = q.top();
                if(current < a)
                    break;
                else {
                    soma += current;
                    q.pop();
                }
            }
            q.push(a);
        }
        cout << soma << endl;
    }
    return 0;
}
