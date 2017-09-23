#include <bits/stdc++.h>

using namespace std;

bool contains(vector< vector<char> > vv, char f){
    for(vector<char> c : vv)
        for(char d : c)
            if(d == f)
                return true;
    return false;
}

void add(vector< vector<char> >& vv, char p, char f){
    for(vector<char>& c : vv){
        for(char d : c){
            if(d == p){
                c.push_back(f);
                return;
            }
        }
    }
    vector<char> v;
    v.push_back(p);
    v.push_back(f);
    vv.push_back(v);    
}

bool comp(vector<char> c, vector<char> d){
    return *(c.begin()) < *(d.begin());
}

bool compare(char c, char d){
    return c < d;
}

int locate(vector< vector<char> > vv, char a){
    int i = 0;
    for(vector<char> v : vv){
        for(char c : v)
            if(c == a)
                return i;
        i++;
    }
    return -1;
}

void copy(vector< vector<char> >& vv, char a, char b){
    char mn = min(a, b);
    char mx = max(a, b);
    for(vector<char>& v : vv){
        for(char c : v){
            if(c == mn){
                int i = 0;
                for(vector<char>& t : vv){
                    for(char d : t){
                        if(d == mx){
                            v.insert(v.end(), t.begin(), t.end());
                            vv.erase(vv.begin() + i);
                            return;
                        }
                    }
                    i++;
                }
            }
        }
    }
}

int main(){
    int n, v, e;
    char a, b;
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> v >> e;
        vector< vector<char> > vv;
        while(e--){
            cin >> a >> b;
            if(!contains(vv, a) && !contains(vv, b))
                add(vv, a, b);
            else if(!contains(vv, a))
                add(vv, b, a);
            else if(!contains(vv, b))
                add(vv, a, b);
            else if(locate(vv, a) != locate(vv, b))
                copy(vv, a, b);
        }
        for(char c = 'a', i = 0; i<v; i++, c++){
            if(!contains(vv, c)){
                vector<char> v;
                v.push_back(c);
                vv.push_back(v);
            }
        }
        for(vector<char>& c : vv)
            sort(c.begin(), c.end(), compare);
        sort(vv.begin(), vv.end(), comp);
        cout << "Case #" << i << ":" << endl;
        for(vector<char>& c : vv){
            if(c.size()){
                for(char f : c)
                    cout << f << ",";
                cout << endl;
            }
        }
        cout << vv.size() << " connected components" << endl << endl;                       
    }
    return 0;
}
