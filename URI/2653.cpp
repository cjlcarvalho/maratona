#include <bits/stdc++.h>

using namespace std;

void add(vector<string>& v, string s){
    for(string i : v)
        if(i == s)
            return;
    v.push_back(s);
}

int main(){
    string x;
    vector<string> v;
    while(getline(cin, x)){
        add(v, x);
    }
    cout << v.size() << endl;
    return 0;
}
