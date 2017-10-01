#include <bits/stdc++.h>

using namespace std;

int toInt(string s){
    int result = 0;
    for(char c : s)
        result += c - 48;
    return result;
}

int reduce(int a){
    int result = 0;
    while(a){
        result += a % 10;
        a /= 10;
    }
    return result;
}

int main(){
    string a, b;
    while(cin >> a >> b){
        if(a == "0" && b == "0") break;
        int c = toInt(a);
        int d = toInt(b);
        while(c >= 10)
            c = reduce(c);
        while(d >= 10)
            d = reduce(d);
        if(c > d)
            cout << 1 << endl;
        else if(c == d)
            cout << 0 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}
