#include <bits/stdc++.h>

using namespace std;

void anagram(string prefix, string word){
    cout << prefix << endl;
    if(word.size() <= 1) return;
    for(int i = 0; i<int(word.size()); i++){
        string before = word.substr(0, i);
        string after = word.substr(i + 1, word.size() - i - 1);
        anagram(prefix + word[i], before + after);
    }
}

int main(){
    string s;
    while(cin >> s)
        anagram("", s);
    return 0;
}
