#include <bits/stdc++.h>

using namespace std;

int convert(string a){
    int result = 0, temp;
    for(char c : a){
        if(islower(c) || isupper(c)){
            temp = int(tolower(c));
            temp -= 97;
            result += (temp % 9) + 1;
        }
    }
    return result;
}

int main(){
    string a;
    int b, temp;
    while(getline(cin, a)){
        b = convert(a);
        while(b >= 10){
            temp = 0;
            while(b){
                temp += b % 10;
                b /= 10;
            }
            b = temp;
        }
        cout << b << endl;
    }
    return 0;
}
