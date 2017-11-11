#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, total;
    string s;
    cin >> n;
    cin.ignore();
    while(n--){
        getline(cin, s);
        total = 1;
        for(int i = 0; i<int(s.size()); i++){
            if(isupper(s[i]) || islower(s[i])){
                if(s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 's' || s[i] == 'S')
                    total *= 3;
                else
                    total *= 2;
            }
            else if(s[i] == '4' || s[i] == '3' || s[i] == '1' || s[i] == '0' || s[i] == '5')
                total *= 3;
        }
        cout << total << endl;
    }
    return 0;
}
