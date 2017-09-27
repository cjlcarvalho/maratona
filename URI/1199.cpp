#include <bits/stdc++.h>

using namespace std;

int main(){
    string n;
    while(getline(cin, n)){
        if(n == "-1") break;
        if(n.size() > 2 && n[0] == '0' && n[1] == 'x'){
            int64_t total = 0;
            int base = 0;
            for(int i = n.size() - 1; i >= 2; base += 4, i--){
                int64_t x;
                if(n[i] >= 'A' && n[i] <= 'F')
                    x = n[i] - 55;
                else if(n[i] >= 'a' && n[i] <= 'f')
                    x = n[i] - 87;
                else
                    x = n[i] - 48;
                total += x << base;
            }
            cout << total << endl;
        }
        else{
            int total = 0;
            for(int i = n.size() - 1, base = 1; i>=0; base *= 10, i--)
                total += (n[i] - 48) * base;
            printf("0x%X\n", total);
        }
    }
    return 0;
}
