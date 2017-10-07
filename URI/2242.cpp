#include <bits/stdc++.h>

using namespace std;

bool isVowel(char a){
    return a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u';
}

int main(){
    string a, b, c;
    getline(cin, a);
    for(int i = 0; i < int(a.size()); i++)
        if(isVowel(a[i]))
            b.push_back(a[i]);
    for(int i = int(a.size()) - 1; i >= 0; i--)
        if(isVowel(a[i]))
            c.push_back(a[i]);
    if(b == c)
        cout << "S" << endl;
    else
        cout << "N" << endl;
    return 0;
}
