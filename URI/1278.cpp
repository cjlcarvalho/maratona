#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    bool check = false;
    while(cin >> n, n){
        if(!check) check = true;
        else cout << endl;
        cin.ignore();
        string s[n];
        for(int i = 0; i<n; i++) getline(cin, s[i]);
        for(int i = 0; i<n; i++){
            while(s[i][0] == ' ')
                s[i].erase(s[i].begin());
            for(int j = 0; j<int(s[i].size()); j++){
                if(s[i][j] == ' ' && s[i][j+1] == ' '){
                    s[i].erase(s[i].begin() + j);
                    j--;
                }
            }
            if(s[i][s[i].size() - 1] == ' ')
                s[i].erase(s[i].end() - 1);
        }
        int max = -1;
        for(int i = 0; i<n; i++)
            if(max < int(s[i].size()))
                max = s[i].size();
        for(int i = 0; i<n; i++){
            int j = max - s[i].size();
            while(j--) cout << ' ';
            cout << s[i] << endl;
        }
    }
    return 0;
}
