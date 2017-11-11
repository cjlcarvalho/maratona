#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a;
    while(cin >> n, n){
        deque<int> d;
        for(int i = 0; i<n*2; i++){
            cin >> a;
            d.push_back(a);
        }
        int um = 0;
        bool jogada = true;
        while(!d.empty()){
            if(d.front() % 2 == 0){
                d.pop_front();
                if(jogada) um++;
            }
            else if(d.back() % 2 == 0){
                d.pop_back();
                if(jogada) um++;
            }
            else
                d.pop_front();            
            jogada = !jogada;
        }
        cout << um << endl;
    }
    return 0;
}
