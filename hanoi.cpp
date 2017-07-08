#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, i = 1;
    while(cin >> n){
        if(n == 0)
            break;
        cout << "Teste " << i << endl;
        int result = 2;
        for(int j = 1; j<n; j++)
            result *= 2;
        cout << result - 1 << endl;
        cout << endl;
        i++;
    }
    return 0;
}
