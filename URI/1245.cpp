#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, b;
    char a;
    while(cin >> n){
        vector< pair<int, char> > vp;
        int total = 0;
        while(n--){
            cin >> b >> a;
            bool find = false;
            for(unsigned int i = 0; i<vp.size(); i++){
                if((vp[i]).first == b && (((vp[i]).second == 'D' && a == 'E') || ((vp[i]).second == 'E' && a == 'D'))){ 
                    total++;
                    vp.erase(vp.begin() + i);
                    find = true;
                    break;
                }
            }
            if(!find)
                vp.push_back({b, a});
        }
        cout << total << endl;    
    }
    return 0;
}
