#include <bits/stdc++.h>

using namespace std;

bool compare(string a, string b){
    return a.size() > b.size();
}

vector<string> split(string s, char delimiter){
    vector<string> result;
    for(unsigned int i = 0; i<s.size(); i++){
        string x;
        while(i < s.size() && s[i] != delimiter && s[i] != '\n'){
            x.push_back(s[i]);
            i++;
        }
        result.push_back(x); 
    }
    return result;
}

int main(){
    int n;
    string s;
    cin >> n;
    cin.ignore();
    while(n--){
        getline(cin, s);
        vector<string> result = split(s, ' ');
        stable_sort(result.begin(), result.end(), compare);
        for(unsigned int i = 0; i<result.size(); i++){
            cout << result[i];
            if(i != result.size() - 1)
                cout << " ";
            else
                cout << endl;
        }
    }
    return 0;
}
