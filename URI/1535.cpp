#include <bits/stdc++.h>

using namespace std;

void get_squares(vector<int64_t>& v, int64_t a){
    for(int64_t i = v.size(); i<a; i++)
        v.push_back(i*i);
}

int main(){
    vector<int64_t> v;
    int64_t a;
    
    while(cin >> a){
        if(v.size() < a)
            get_squares(v, a);
        bool isCouple = false;
        for(int i = v.size() - 1; i >= 0 && !isCouple; i--){
            for(int j = 0; j<i && !isCouple; j++){
                int64_t result = v[i] - v[j];
                if(result == a && j != 0){
                    cout << i << " " << j << endl;
                    isCouple = true;
                }
            }
        }
        if(!isCouple){
            if(a % 2 == 0)
                cout << "Bachelor Number." << endl;
            else
                cout << "Spinster Number." << endl;
        }
    }
    return 0;
}
