#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int64_t estrelas[n];
    bool checked[n];
    memset(checked, false, sizeof(checked));
    for(int i = 0; i<n; i++)
        cin >> estrelas[i];
    int i = 0;
    while(i >= 0 && i < n){
        checked[i] = true;
        if(estrelas[i] % 2){
            if(estrelas[i] > 0)
                estrelas[i]--;
            i++;
        }
        else{
            if(estrelas[i] > 0)
                estrelas[i]--;
            i--;
        }
    }
    
    int cont = 0;
    for(int i = 0; i<n; i++)
        if(checked[i] == true) 
            cont++;
        
    int64_t sum = 0;
    for(int i = 0; i<n; i++) 
        sum += estrelas[i];
    
    cout << cont << " " << sum << endl;
    
    return 0;
}
