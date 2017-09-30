#include <bits/stdc++.h>

using namespace std;

bool compare(int a, int b){
    return a > b;
}

int main(){
    int n, x;
    vector<int> p, i;
    cin >> n;
    while(n--){
       cin >> x;
       if(x % 2 == 0)
           p.push_back(x);
       else
           i.push_back(x);
    }
    sort(p.begin(), p.end());
    sort(i.begin(), i.end(), compare);
    for(int c : p)
        cout << c << endl;
    for(int c : i)
        cout << c << endl;
    return 0;
}
