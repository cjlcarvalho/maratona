#include <bits/stdc++.h>

using namespace std;

string validate(string a){
    if(a.size() != 20) return "";
    if(a[0] != 'R' || a[1] != 'A') return "";
    for(unsigned int j = 2; j <a.size(); j++)
        if(!isdigit(a[j]))
            return "";
    int i = 2;
    while(a[i] == '0') i++;
    return a.substr(i, a.size() - i);
}

int main(){
    int n;
    string a, result;
    cin >> n;
    cin.ignore();
    while(n--){
        cin >> a;
        result = validate(a);
        if(result.size() == 0) cout << "INVALID DATA" << endl;
        else cout << result << endl;
    }
    return 0;
}
