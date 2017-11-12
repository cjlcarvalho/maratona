#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string num;
    while(cin >> n, n){
        cin.ignore();
        while(n--){
            cin >> num;
            string result;
            for(int i = num.size() - 1, j = 0; i>=0; i--, j = !j){
                int qt = num[i] - 48;
                while(qt--) result.push_back(char(j + 48));
            }
            int um, zero;
            um = zero = 0;
            for(int i = 0; i<int(result.size()); i++){
                if(result[i] == '1') um++;
                else if(result[i] == '0') zero++;
            }
            int soma = 0;
            while(um){
                soma += um % 10;
                um /= 10;
            }
            while(zero){
                soma += zero % 10;
                zero /= 10;
            }
            cout << soma << endl;
        }
    }
    return 0;
}


