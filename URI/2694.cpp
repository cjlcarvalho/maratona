#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, j, soma;
    string a;
    cin >> n;
    cin.ignore();
    while(n--){
        getline(cin, a);
        soma = 0;
        for(int i = 0; i<int(a.size()); i++){
            if(isdigit(a[i])){
                j = i;
                while(j < int(a.size()) && isdigit(a[j])) j++;
                soma += stoi(a.substr(i, j - i));
                i = j - 1;
            }
        }
        cout << soma << endl;
    }
    return 0;
}
