#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b;
    cin >> n;
    vector<int> v[n];
    for(int i = 0; i<n; i++){
        cin >> a >> b;
        v[a-1].push_back(i);
        v[b-1].push_back(i);
    }
    int max = -1;
    for(int i = 0; i<n; i++)
        if(int(v[i].size()) > max)
            max = v[i].size();
    vector<int> s;
    for(int i = 0; i<n; i++)
        if(int(v[i].size()) == max)
            s.push_back(i);
    if(s.size() == 1)
        cout << n - s.size() << endl;
    else
        cout << s.size() << endl;
    return 0;
}
