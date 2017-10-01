#include <bits/stdc++.h>

using namespace std;

int mod;

bool compare(int a, int b){
    if(a % mod == b % mod){
        if(a % 2 && b % 2)
            return a > b;
        else if(!(a%2) && !(b%2))
            return a < b;
        else
            return (a % 2) && !(b % 2);
    }
    return (a % mod) < (b % mod);
}

int main(){
    int n, m;
    while(cin >> n >> m){
        if(!n && !m){
            cout << n << " " << m << endl;
            break;
        }
        mod = m;
        int nums[n];
        for(int i = 0; i<n; i++) cin >> nums[i];
        sort(nums, nums + n, compare);
        cout << n << " " << m << endl;
        for(int i = 0; i<n; i++) cout << nums[i] << endl;
    }
    return 0;
}
