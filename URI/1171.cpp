#include <bits/stdc++.h>

using namespace std;

int has(vector<int> v, int n){
    for(int i = 0; i<v.size(); i++)
        if(v[i] == n)
            return i;
    return -1;
}

void order(vector<int>& v, vector<int>& n){
    int troca;
    for(int i = v.size() - 1; i > 0; i--){
        for(int j = 0; j < i; j++){
            if(v[j] > v[j + 1]){
                troca = v[j];
                v[j] = v[j + 1];
                v[j + 1] = troca;
                troca = n[j];
                n[j] = n[j + 1];
                n[j + 1] = troca;
            }
        }
    } 
}

int main(){
    int n, x;
    cin >> n;
    vector<int> num;
    vector<int> v;
    while(n--){
        cin >> x;
        int pos = has(num, x);
        if(pos == -1){
            num.push_back(x);
            v.push_back(1);
        }
        else
            v[pos]++;
    }
    order(num, v);
    for(int i = 0; i<num.size(); i++){
        cout << num[i] << " aparece " << v[i] << " vez(es)" << endl;
    }
    return 0;
}
