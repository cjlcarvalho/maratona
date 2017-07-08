#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 2; i<=n; i++){
        if(i == n)
            cout << "sim" << endl;
        else if(n % i == 0){
            cout << "nao" << endl;
            break;
        }
    }
    return 0;
}
