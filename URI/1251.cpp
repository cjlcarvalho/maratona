#include <bits/stdc++.h>

using namespace std;

typedef vector< pair<char, int> > vpp;

bool compare(pair<char, int> a, pair<char, int> b){
    if(a.second < b.second)
        return true;
    else if(a.second == b.second)
        return a.first > b.first;
    return false;
}

int exists(vpp v, char c){
    for(int i = 0; i<int(v.size()); i++)
        if(v[i].first == c) return i;
    return -1;
}

int main(){
    vector< vpp > v;
    string s;
    int p;
    while(getline(cin, s)){
        vpp vp;
        for(int i = 0; i<int(s.size()); i++){
            p = exists(vp, s[i]); 
            if(p != -1)
                vp[p].second++;
            else{
                pair<char, int> p;
                p.first = s[i];
                p.second = 1;
                vp.push_back(p);
            }
        }
        sort(vp.begin(), vp.end(), compare);
        v.push_back(vp);
    }
    for(int i = 0; i<int(v.size()); i++){
        for(pair<char, int> p : v[i])
            cout << int(p.first) << " " << p.second << endl;
        if(i != int(v.size()) - 1) cout << endl;
    }
}
