#include <bits/stdc++.h>

// código feio da zorra

using namespace std;

void decode(string a){
    string result;
    int cont, j;
    for(int i = 0; i < int(a.size()); i++){
        string temp;
        j = i;
        while(j < int(a.size()) && a.substr(j, 3) != "..."){
            if(a[j] == '.' && a[j+1] != '.') j++;
            cont = 0;
            while(j < int(a.size()) && a[j] == '='){
                j++;
                cont++;
            }
            if(cont == 1) temp.push_back('.');
            else if(cont == 3) temp.push_back('-');
        }
        if(a.substr(j, 3) == "...") i = j + 2;
        else if(a.substr(j, 7) == ".......") i = j + 6;
        else i = j - 1;
        
        if(temp == ".-") result.push_back('a');
        else if(temp == "-...") result.push_back('b');
        else if(temp == "-.-.") result.push_back('c');
        else if(temp == "-..") result.push_back('d');
        else if(temp == ".") result.push_back('e');
        else if(temp == "..-.") result.push_back('f');
        else if(temp == "--.") result.push_back('g');
        else if(temp == "....") result.push_back('h');
        else if(temp == "..") result.push_back('i');
        else if(temp == ".---") result.push_back('j');
        else if(temp == "-.-") result.push_back('k');
        else if(temp == ".-..") result.push_back('l');
        else if(temp == "--") result.push_back('m');
        else if(temp == "-.") result.push_back('n');
        else if(temp == "---") result.push_back('o');
        else if(temp == ".--.") result.push_back('p');
        else if(temp == "--.-") result.push_back('q');
        else if(temp == ".-.") result.push_back('r');
        else if(temp == "...") result.push_back('s');
        else if(temp == "-") result.push_back('t');
        else if(temp == "..-") result.push_back('u');
        else if(temp == "...-") result.push_back('v');
        else if(temp == ".--") result.push_back('w');
        else if(temp == "-..-") result.push_back('x');
        else if(temp == "-.--") result.push_back('y');
        else if(temp == "--..") result.push_back('z');
        
        if(a.substr(j, 7) == ".......") result.push_back(' ');
    }
    cout << result << endl;
}

int main(){
    int n;
    string a;
    cin >> n;
    cin.ignore();
    while(n--){
        cin >> a;
        decode(a);
    }
    return 0;
}
