#include <bits/stdc++.h>

using namespace std;

int bintodec(int n){
    int base = 0, result = 0;
    while(n){
        if(n % 10)
            result += (1 << base);
        base++;
        n /= 10;
    }
    return result;
}

string dectobin(int n){
    string result;
    while(n){
        if(n%2)
            result.insert(result.begin(), '1');
        else
            result.insert(result.begin(), '0');
        n /= 2;
    }
    return result;
}

int main(){
    int n;
    char a[250], b[250];
    cin >> n;
    cin.ignore();
    for(int i = 1; i<=n; i++){
        memset(a, 0, 250 * sizeof(char));
        memset(b, 0, 250 * sizeof(char));
        scanf(" %s %[^\n]s", a, b);
        cout << "Case " << i << ":" << endl;
        if(!strcmp(b, "bin")){
            cout << strtol(a, NULL, 10) << " dec" << endl;
            //printf("%x hex\n", num);
        }
        else if(!strcmp(b, "dec")){
            //printf("%x hex\n", a);
            //cout << dectobin(a) << " bin" << endl;
        }
        else if(!strcmp(b, "hex")){
            //printf("%d dec\n", a);
            //cout << dectobin(a) << " bin" << endl;
        }
        cout << endl;
    }
    return 0;
}
