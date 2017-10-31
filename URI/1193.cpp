#include <bits/stdc++.h>

using namespace std;

string asDec(string num, string base){
    string result;
    long n = 0, b;
    if(base == "bin"){
        b = 1;
        for(int i = int(num.size() - 1); i >= 0; i--){
            n += b * (num[i] - 48);
            b *= 2;
        }
    }
    else if(base == "hex"){
        b = 0;
        for(int i = int(num.size() - 1); i >= 0; i--){
            long x = (num[i] >= '0' && num[i] <= '9') ? num[i] - 48 : num[i] - 87;
            n += x << b;
            b += 4;
        }
    }
    while(n){
       result.insert(result.begin(), (n % 10) + 48);
       n /= 10;
    }
    return result;
}

string asHex(string num, string base){
    string result;
    long n = 0, b; 
    if(base == "dec"){
        b = 1;
        for(int i = int(num.size()) - 1; i >= 0; i--){
            n += (num[i] - 48) * b;
            b *= 10;
        }
    }
    else if(base == "bin"){
        b = 1;
        for(int i = int(num.size() - 1); i >= 0; i--){
            n += b * (num[i] - 48);
            b *= 2;
        }
    }
    while(n){
        char x = (n % 16) >= 10 ? (n%16) + 87 : (n%16) + 48;
        result.insert(result.begin(), x);
        n /= 16;
    }
    return result;
}

string asBin(string num, string base){
    string result;
    long n = 0, b;
    if(base == "dec"){
        b = 1;
        for(int i = int(num.size()) - 1; i >= 0; i--){
            n += (num[i] - 48) * b;
            b *= 10;
        }
    }
    else if(base == "hex"){
        b = 0;
        for(int i = int(num.size() - 1); i >= 0; i--){
            long x = (num[i] >= '0' && num[i] <= '9') ? num[i] - 48 : num[i] - 87;
            n += x << b;
            b += 4;
        }
    }
    while(n){
        result.insert(result.begin(), (n % 2) + 48);
        n /= 2;
    }
    return result;
}

int main(){
    int n, x = 1;
    cin >> n;
    while(n--){
        string num, base;
        cin >> num >> base;
        cout << "Case " << x << ":" << endl;
        if(base == "bin"){
            cout << asDec(num, base) << " dec" << endl;
            cout << asHex(num, base) << " hex";
        }
        else if(base == "dec"){
            cout << asHex(num, base) << " hex" << endl;
            cout << asBin(num, base) << " bin";
        }
        else if(base == "hex"){
            cout << asDec(num, base) << " dec" << endl;
            cout << asBin(num, base) << " bin";
        }
        cout << endl << endl;
        x++;
    }
    return 0;
}
