#include <bits/stdc++.h>

using namespace std;

int main(){
    bool flag = false;
    string quote;
    while(getline(cin, quote)){
        for(char c : quote){
            if(c == '\"'){
                if(!flag)
                    cout << "``";
                else
                    cout << "\'\'";
                flag = !flag;
            }
            else cout << c;
        }
        cout << endl;
    }
    return 0;
}
