#include <bits/stdc++.h>

using namespace std;

bool compare(pair<string, string> a, pair<string, string> b){
    return a.first <= b.first;
}

int count(string a, vector< pair<string, string> >& v){
    int result = 0;
    for(unsigned int i = 0; i<v.size(); i++){
        if(v[i].second == a) return -1;
        else if(v[i].first == a) result++;
    }
    return result;
}

void change(string a, vector< pair<string, string> >& v, bool* flag){
    for(unsigned int i = 0; i < v.size(); i++){
        if(v[i].first == a)
            flag[i] = true;
    }
}

int main(){
    string a, b;
    vector< pair<string, string> > v;
    while(cin >> a >> b)
        v.push_back({a, b});
    sort(v.begin(), v.end(), compare);
    bool* flag = new bool[v.size()];
    memset(flag, false, v.size() * sizeof(bool));
    cout << "HALL OF MURDERERS" << endl;
    for(unsigned int i = 0; i<v.size(); i++){
        int cont = count(v[i].first, v);
        if(cont != -1){
            if(!flag[i]){
                cout << v[i].first << " " << cont << endl;
                change(v[i].first, v, flag);
            }
        }
    }
    return 0;
}
