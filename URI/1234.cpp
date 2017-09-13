#include <bits/stdc++.h>

using namespace std;

int main(){
    bool maiscula;
    string p;
    while(getline(cin, p)){
        maiscula = true;
        for(int i = 0; i<p.size(); i++){
            if(p[i] != ' '){
                if(maiscula){
                    if(p[i] >= 'a' && p[i] <= 'z')
                        p[i] -= 32;
                }
                else {
                    if(p[i] >= 'A' && p[i] <= 'Z')
                        p[i] += 32;
                }
                maiscula = !maiscula;
            }
        }
        cout << p << endl;
    }
    return 0;
}
