#include <bits/stdc++.h>

using namespace std;

struct Conexao {
  
  map<long, vector<long>> E;
  
  void add(long x){
    vector<long> v;
    E[x] = v;
  }
  
  void addMultiplo(int x){
    for(auto i = E.begin(); i != E.end(); i++){
        if(x % (*i).first == 0)
            E[(*i).first].push_back(x);   
    }
  }
  
  long cont(){
    long result = 0;
    for(auto i = E.begin(); i != E.end(); i++){
        if((*i).second.size()) result++;
    }
    return result;
  }  
    
};

int main(){
    int n, a, b, t = 1;
    cin >> n;
    while(n--){
        cin >> a;
        Conexao con;
        for(int i = 0; i<a; i++){
            cin >> b;
            con.add(b);
        }
        cin >> a;
        for(int i = 0; i<a; i++){
            cin >> b;
            con.addMultiplo(b);
        }
        cout << "Case " << t << ": " << con.cont() << endl;
        t++;
    }
    return 0;
}
