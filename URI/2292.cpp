#include <bits/stdc++.h>

// probleminha de padrão binário massa :)

using namespace std;

int main(){
    int64_t m;
    int n, j;
    string a;
    cin >> n;
    while(n--){
        cin >> a >> m;
        cin.ignore();
        j = 0;
        while(m){
            if(m % 2){
                if(a[j] == 'O') m++; // nos casos em que m é impar e a[j] está ligado, é necessário incrementar, como uma espécie de "resta um"
                a[j] = a[j] == 'X' ? 'O' : 'X'; // e sempre que m for impar, o estado final será alterado
            }
            j++;
            m /= 2;
        }
        cout << a << endl;
    }
    return 0;
}
