#include <bits/stdc++.h>

using namespace std;

int compare(string a, string b){
    int result = 0, temp;
    for(int i = 0; i < int(a.size()); i++){
        for(int j = 0; j<int(b.size()); j++){
            if(a[i] == b[j]){
                int k = j, l = i;
                temp = 0;
                while(l < int(a.size()) && k < int(b.size()) && a[l] == b[k]){
                    temp++;
                    l++;
                    k++;
                }
                if(temp > result) result = temp;
            }
        }
    }
    return result;
}

int main(){
    string a, b;
    while(getline(cin, a)){
        getline(cin, b);
        cout << compare(a, b) << endl;
    }
    return 0;
}
