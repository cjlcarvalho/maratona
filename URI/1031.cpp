#include <bits/stdc++.h>

using namespace std;

int solve(int n){
    bitset<100> regioes;
    for(int i = 1; ; i++){
        regioes.set();
        int j = 0;
        while(int(regioes.count()) != (100 - n + 1)){
            regioes.set(j, 0);
            if(j == 12) break;
            for(int count = i; count; ){
                j++;
                if(j >= n)
                    j = 0;
                if(regioes.test(j))
                    count--;
            }
        }
        if(int(regioes.count()) == (100 - n + 1) && regioes.test(12))
            return i;
    }
    return 0;
}

int main(){
    int n;
    while(cin >> n, n){
        cout << solve(n) << endl;
    }
    return 0;
}
