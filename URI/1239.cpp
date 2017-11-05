#include <bits/stdc++.h>

using namespace std;

void transform(char* texto, int begin, char c){
    int end, j;
    j = begin + 1;
    end = -1;
    while(texto[j] && texto[j] != c) j++;
    if(texto[j] && texto[j] == c) end = j;
    if(end != -1){
        for(int k = strlen(texto) - 1; k > begin; k--) texto[k+2] = texto[k];
        texto[begin] = '<';
        texto[begin + 1] = (c == '*') ? 'b' : 'i';
        texto[begin + 2] = '>';
        end += 2;
        for(int k = strlen(texto) - 1; k > end; k--) texto[k+3] = texto[k];
        texto[end] = '<';
        texto[end + 1] = '/';
        texto[end + 2] = (c == '*') ? 'b' : 'i';
        texto[end + 3] = '>';
    }
}

int main(){
    char texto[1000] = {};
    while(cin.getline(texto, 1000)){
        for(int i = 0; texto[i]; i++)
            if(texto[i] == '*' || texto[i] == '_')
                transform(texto, i, texto[i]);
        cout << texto << endl;
        memset(texto, '\0', sizeof(texto));
    }
    return 0;
}
