#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        string x;
        cin >> x;
        if(x.size() == 5)
            cout << 3 << endl;
        else{
            int um, dois;
            um = dois = 0;
            string u("one");
            string d("two");
            for(int i = 0; i<x.size(); i++){
                if(x[i] == u[i]) um++;
                if(x[i] == d[i]) dois++;
            }
            if(um > dois)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }
    return 0;
}
