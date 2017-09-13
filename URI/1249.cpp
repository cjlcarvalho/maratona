#include <bits/stdc++.h>

using namespace std;

int main(){
    string a;
    
    while(getline(cin, a)){
        for(int i = 0; i<a.size(); i++){
            if((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')){
                int n = 13;
                while(n--){
                    if(a[i] == 'a')
                        a[i] = 'z';
                    else if(a[i] == 'A')
                        a[i] = 'Z';
                    else
                        a[i]--;
                }
            }
        }
        cout << a << endl;
    }
    
    return 0;
}
