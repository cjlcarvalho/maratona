#include <bits/stdc++.h>

using namespace std;

string minimize(string s){
    for(int i = 0; i<int(s.size()); i++)
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    return s;
}

int main(){
    vector<string> v;
    map<string, string> m;
    string s;
    while(getline(cin, s))
        m[minimize(s)] = s;
    for(auto i = m.begin(); i != m.end(); i++)
        v.push_back((*i).first);
    sort(v.begin(), v.end());
    cout << m[v[v.size() - 1]] << endl;
    return 0;
}
