#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, k, l;
    char c;
    cin >> n >> m >> k;
    char rhcp[n][m];
    char res[4] = { 'R', 'H', 'C', 'P' };
    int s = 0;
    
    while(k--){
        cin >> c >> l;
        if(c == 'L')
            memset(rhcp[l-1], res[s], m * sizeof(char));
        else {
            for(int i = 0; i<n; i++)
                rhcp[i][l-1] = res[s];
        }
        s++;
        s %= 4;
    }
    
    int rt, ht, ct, pt;
    rt = ht = ct = pt = 0; 
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(rhcp[i][j] == 'R') rt++;
            else if(rhcp[i][j] == 'H') ht++;
            else if(rhcp[i][j] == 'C') ct++;
            else if(rhcp[i][j] == 'P') pt++;
        }    
    }
    
    cout << "R" << rt << " H" << ht << " C" << ct << " P" << pt << endl;
    return 0;
}
