#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, A, B, M, T;
    cin >> N;
    int weights[N];
    bool edges[N][N];
    for(int i = 0; i<N; i++){
        cin >> A >> B;
        weights[A] = B;
    }
    cin >> M;
    while(M--){
        cin >> A >> B;
        edges[A][B] = edges[B][A] = true;
    }
    cin >> T;
    while(T--){
        cin >> A;
        for(int i = 0; i<N; i++)
            if(edges[A][i])
                cout << weights[i] << " ";
        cout << endl;
    }
    return 0;
}
