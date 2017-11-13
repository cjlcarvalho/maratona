#include <bits/stdc++.h>

using namespace std;

void translate(string s, int n){
    string mat[3][n];
    for(int i = n - 1; i >= 0; i--){
        if(s[i] == '1'){
            mat[0][i] = "*.";
            mat[1][i] = "..";
            mat[2][i] = "..";
        }
        else if(s[i] == '2'){
            mat[0][i] = "*.";
            mat[1][i] = "*.";
            mat[2][i] = "..";
        }
        else if(s[i] == '3'){
            mat[0][i] = "**";
            mat[1][i] = "..";
            mat[2][i] = "..";
        }
        else if(s[i] == '4'){
            mat[0][i] = "**";
            mat[1][i] = ".*";
            mat[2][i] = "..";
        }
        else if(s[i] == '5'){
            mat[0][i] = "*.";
            mat[1][i] = ".*";
            mat[2][i] = "..";
        }
        else if(s[i] == '6'){
            mat[0][i] = "**";
            mat[1][i] = "*.";
            mat[2][i] = "..";
        }
        else if(s[i] == '7'){
            mat[0][i] = "**";
            mat[1][i] = "**";
            mat[2][i] = "..";
        }
        else if(s[i] == '8'){
            mat[0][i] = "*.";
            mat[1][i] = "**";
            mat[2][i] = "..";
        }
        else if(s[i] == '9'){
            mat[0][i] = ".*";
            mat[1][i] = "*.";
            mat[2][i] = "..";
        }
        else if(s[i] == '0'){
            mat[0][i] = ".*";
            mat[1][i] = "**";
            mat[2][i] = "..";
        } 
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < n; j++){
            cout << mat[i][j];
            if(j == n - 1) cout << endl;
            else cout << " ";
        }
    }
}

void translate(string** s, int n){
    string result;
    for(int i = n - 1; i>=0; i--){
        if(s[0][i] == "*." &&
           s[1][i] == ".." &&
           s[2][i] == "..")
           result.insert(result.begin(), '1');
        else if(s[0][i] == "**" &&
           s[1][i] == "*." &&
           s[2][i] == "..")
           result.insert(result.begin(), '6');
        else if(s[0][i] == "*." &&
           s[1][i] == "*." &&
           s[2][i] == "..")
           result.insert(result.begin(), '2');
        else if(s[0][i] == "**" &&
           s[1][i] == ".." &&
           s[2][i] == "..")
           result.insert(result.begin(), '3');
        else if(s[0][i] == "**" &&
           s[1][i] == ".*" &&
           s[2][i] == "..")
           result.insert(result.begin(), '4');
        else if(s[0][i] == "*." &&
           s[1][i] == ".*" &&
           s[2][i] == "..")
           result.insert(result.begin(), '5');
        else if(s[0][i] == "**" &&
           s[1][i] == "**" &&
           s[2][i] == "..")
           result.insert(result.begin(), '7');
        else if(s[0][i] == "*." &&
           s[1][i] == "**" &&
           s[2][i] == "..")
           result.insert(result.begin(), '8');
        else if(s[0][i] == ".*" &&
           s[1][i] == "*." &&
           s[2][i] == "..")
           result.insert(result.begin(), '9');
        else if(s[0][i] == ".*" &&
           s[1][i] == "**" &&
           s[2][i] == "..")
           result.insert(result.begin(), '0');
    }
    cout << result << endl;
}

int main(){
    int n;
    while(cin >> n, n){
        cin.ignore();
        char c;
        cin >> c;
        if(c == 'S'){
            string s;
            cin >> s;
            translate(s, n);
        }
        else{
            string** s = new string*[3];
            for(int i = 0; i<3; i++) s[i] = new string[n];
            for(int i = 0; i<3; i++)
                for(int j = 0; j < n; j++)
                    cin >> s[i][j];
                    
            translate(s, n);
        }
    }
    return 0;
}
