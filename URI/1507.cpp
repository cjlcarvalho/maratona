#include <bits/stdc++.h>

using namespace std;

queue<char> toQueue(string s){
    queue<char> q;
    for(char c : s)
        q.push(c);
    return q;
}

int main(){
    int n, m;
    string a, b;
    cin >> n;
    cin.ignore();
    while(n--){
        getline(cin, a);
        cin >> m;
        cin.ignore();
        while(m--){
            getline(cin, b);
            queue<char> q = toQueue(b);
            for(unsigned int i = 0; i<a.size(); i++)
                if(a[i] == q.front())
                    q.pop();
            if(q.empty())
                cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}
