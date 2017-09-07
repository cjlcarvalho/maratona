#include <bits/stdc++.h>

using namespace std;

int identifyEnd(string s){
    for(int i = 0; i<s.size(); i++)
        if(i < (s.size() - 1) && s[i] == ' ' && (s[i + 1] >= '0' && s[i + 1] <= '9'))
            return i;
    return 0; 
}

int toInt(string s, int i, int f){
    int total = 0;
    for(int h = f, base = 1; h > i; h--, base *= 10)
        total += (s[h] - 48) * base;
    return total;
}

int main(){
    int n, z, w;
    cin >> n >> w;
    cin.ignore();
    vector<string> v;
    while(n--){
        string x;
        getline(cin, x);
        int z = toInt(x, identifyEnd(x), x.size() - 1);
        if(z > w)
            v.push_back(x);
    }
    for(int i = 0; i<v.size(); i++){
        for(int j = 0; j<identifyEnd(v[i]); j++)
            cout << v[i][j];
        cout << endl;
    }
    return 0;
}
