#include <bits/stdc++.h>

using namespace std;

string minimize(string s){
    for(int i = 0; i<int(s.size()); i++)
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    return s;
}

int main(){
    set<string> s;
    string str;
    int begin, end;
    while(getline(cin, str)){
        for(int i = 0; i<int(str.size()); i++){
            if(isupper(str[i]) || islower(str[i])){
                begin = i;
                end = i;
                while(end < int(str.size()) && (isupper(str[end]) || islower(str[end]))) end++;
                s.insert(minimize(str.substr(begin, end - begin)));
                i = end - 1;
            }
        }
    }
    for(auto i = s.begin(); i != s.end(); i++) cout << *i << endl;
    return 0;
}
