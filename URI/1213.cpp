#include <bits/stdc++.h>

using namespace std;

int onlyOnes(long n){
    int result = 0;
    while(n){
        if(n % 10 != 1) return 0;
        result++;
        n /= 10;
    }
    return result;
}

long ones(long n){
    int x;
    for(int i = 1; ; i++){
        x = onlyOnes(n * i);
        if(x) return x;
    }
    return 0;
}

int main(){
    long n;
    while(cin >> n){
        cout << ones(n) << endl;
    }
    return 0;
}
