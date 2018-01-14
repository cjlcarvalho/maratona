#include <bits/stdc++.h>

using namespace std;

struct Presente {
    int i;
    int h;
    int w;
    int l;
};

bool compare(const Presente& a, const Presente& b){
    if((a.h * a.w * a.l) > (b.h * b.w * b.l))
        return true;
    else if((a.h * a.w * a.l) == (b.h * b.w * b.l))
        if(a.i < b.i)
            return true;
    return false;
}

int main(){
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        Presente p[n];
        for(int i = 0; i<n; i++)
            cin >> p[i].i >> p[i].h >> p[i].w >> p[i].l;
        sort(p, p + n, compare);
        for(int i = 0; i<k; i++){
            cout << p[i].i;
            if(i == k - 1)
                cout << endl;
            else cout << " ";
        }
    }
    return 0;
}
