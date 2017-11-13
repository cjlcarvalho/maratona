#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    while(cin >> n >> m){
        if(!n && !m) break;
        bool mat[n][m];
        for(int i = 0; i<n; i++)
            for(int j = 0; j<m; j++)
                cin >> mat[i][j];
        int result = 0;
        
        bool exist = false;
        for(int i = 0; i<n && !exist; i++){
            int temp = 0;
            for(int j = 0; j<m; j++)
                if(mat[i][j]) temp++;
            if(temp == m)
                exist = true;
        }
        
        if(!exist) result++;
        
        exist = false;
        for(int j = 0; j<m && !exist; j++){
            int temp = 0;
            for(int i = 0; i<n; i++)
                if(mat[i][j]) temp++;
            if(!temp) exist = true;
        }
        
        if(!exist) result++;
        
        exist = false;
        for(int j = 0; j<m && !exist; j++){
            int temp = 0;
            for(int i = 0; i<n; i++)
                if(mat[i][j]) temp++;
            if(temp == n) exist = true;
        }
        
        if(!exist) result++;
        
        exist = false;
        for(int i = 0; i<n && !exist; i++){
            int temp = 0;
            for(int j = 0; j<m; j++)
                if(mat[i][j]) temp++;
            if(!temp) exist = true;
        }
        
        if(!exist) result++;
        
        cout << result << endl;
    }
    return 0;
}
