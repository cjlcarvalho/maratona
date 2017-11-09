#include <bits/stdc++.h>

using namespace std;

char decode(char a){
    if(isupper(a) || islower(a)){
        if(a == 'G' || a == 'Q' || a == 'a' || a == 'k' || a == 'u') return '0';
        else if(a == 'I' || a == 'S' || a == 'b' || a == 'l' || a == 'v') return '1';
        else if(a == 'E' || a == 'O' || a == 'Y' || a == 'c' || a == 'm' || a == 'w') return '2';
        else if(a == 'F' || a == 'P' || a == 'Z' || a == 'd' || a == 'n' || a == 'x') return '3';
        else if(a == 'J' || a == 'T' || a == 'e' || a == 'o' || a == 'y') return '4';
        else if(a == 'D' || a == 'N' || a == 'X' || a == 'f' || a == 'p' || a == 'z') return '5';
        else if(a == 'A' || a == 'K' || a == 'U' || a == 'g' || a == 'q') return '6';
        else if(a == 'C' || a == 'M' || a == 'W' || a == 'h' || a == 'r') return '7';
        else if(a == 'B' || a == 'L' || a == 'V' || a == 'i' || a == 's') return '8';
        else if(a == 'H' || a == 'R' || a == 'j' || a == 't') return '9';
    }
    return '\0';
}

int main(){
    int n;
    string a;
    char b;
    cin >> n;
    getline(cin, a);
    while(n--){
        getline(cin, a);
        string result;
        for(int i = 0; int(result.size())<12 && i<int(a.size()); i++){
            b = decode(a[i]);
            if(b) result.push_back(b);
        }
        cout << result << endl;
    }
    return 0;
}
