#include <bits/stdc++.h>

using namespace std;

bool primo(int a){
    if(a <= 1) return false;
    if(a <= 3) return true;
    else if(!(a % 2) || !(a % 3)) return false;
    for(int i = 5; i*i <=a; i+=6)
        if(!(a%i) || !(a%(i+2))) return false;
    return true;
}

int main(){
    int n, a;
    while(scanf(" %d", &n) != EOF){
        vector<int> v;
        for(int i = 0; i<n; i++) {
            scanf(" %d", &a);
            if(primo(a))
                v.push_back(a);
        }        
        if(v.size()){
            for(int i = 0; i<int(v.size()); i++){
                printf("%d", v[i]);
                if(i == int(v.size()) - 1) printf("\n");
                else printf(" ");
            }
        }
        else printf("*\n");
    }
    return 0;
}
