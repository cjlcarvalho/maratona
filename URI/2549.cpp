#include <bits/stdc++.h>

using namespace std;

string iniciais(string s){
    string result;
    int i = 0;
    while(s[i] == ' ') i++;
    result.push_back(s[i]);
    for(int j = i + 1; j < int(s.size()); j++){
        if(s[j] == ' ' && s[j + 1] != ' ' && j + 1 < int(s.size()))
            result.push_back(s[j+1]);
    }
    return result;
}


int main(){
    int n;
    string a;
    while(cin >> n){
        cin.ignore();
        getline(cin, a);
        string s[n];
        for(int i = 0; i<n; i++) getline(cin, s[i]);
        set<string> st;
        for(int i = 0; i<n; i++)
            st.insert(iniciais(s[i]));
        cout << n - st.size() << endl;
    }
    return 0;
}
