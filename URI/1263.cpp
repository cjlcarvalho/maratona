#include <bits/stdc++.h>

using namespace std;

void minimize(string& a){
    for(int i = 0; i<int(a.size()); i++)
        if(a[i] >= 'A' && a[i] <= 'Z') a[i] += 32;
}

int aliterate(string a){
    int result = 0, j;
    bool exist;
    for(int i = 0; i<int(a.size()); i++){
        j = i + 1;
        exist = false;
        while(j < int(a.size())){
            if(a[j-1] == ' '){
               if(a[j] == a[i]) exist = true;
               else break;
            }
            j++;
        }
        if(exist) result++;
        i = j - 1;
    }
    
    return result;
}

int main(){
    string a;
    while(getline(cin, a)){
        minimize(a);
        cout << aliterate(a) << endl;
    }
    return 0;
}
