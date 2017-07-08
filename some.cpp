#include <bits/stdc++.h>

using namespace std;

char tochar(int n){
    if(n >= 10)
        return n + 55;
    return n + 48;
}

int tonum(char n){
    if(n >= '0' && n <= '9')
        return n - 48;
    else if(n >= 'A' && n <= 'Z')
        return n - 55;
}

int main(){
    string a, b;
    vector<char> c;
    int resto;
    while(cin >> a >> b){
        if(a == "0" && b == "0")
            break;
        resto = 0;
        int contA = a.size() - 1;
        int contB = b.size() - 1;
        c.clear();
        while(contA >= 0 || contB >= 0 || resto){
            int result = resto;
            if(contA >= 0){
                result += tonum(a[contA]);
                contA--;
            }
            if(contB >= 0){
                result += tonum(b[contB]);
                contB--;
            }
            if(result > 35){
                result -= 36;
                resto = 1;
            }
            else
                resto = 0;
            c.insert(c.begin(), tochar(result));
        }
        for(vector<char>::iterator i = c.begin(); i != c.end(); ++i)
            cout << *i;
        cout << endl;
    }
    return 0;
}
