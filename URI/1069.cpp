#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int c = 0, cont = 0;
        string s;
        cin >> s;
        for(char l : s){
            if(l == '<') c++;
            else if(l == '>' && c > 0){
                c--;
                cont++;
            }
        }
        cout << cont << endl;
    }
    return 0;
}
