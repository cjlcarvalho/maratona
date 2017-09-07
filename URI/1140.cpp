#include <iostream>

using namespace std;

char minuscula(char l){
    return l > 'Z' ? l - 32 : l;
}

int main(){
    string n;
    while(getline(cin, n)){
        if(n == "*") break;
        char flag = minuscula(n[0]);
        int i = 1;
        bool find = true;
        while(i < n.size()){
            while(n[i] != ' ' && i < n.size()) i++;
            if(i + 1 < n.size()){
                if(minuscula(n[i + 1]) != flag){
                    find = false;
                    break;
                }
            } 
            i++;
        }
        if(find)
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }
    return 0;
}
