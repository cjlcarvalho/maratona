#include <bits/stdc++.h>

using namespace std;

double decode(string a, int ini, int fim){
    if(fim < ini) return 0;
    if(isdigit(a[ini])){
        int start = ini;
        while(isdigit(a[start]) && start < fim) start++;
        if(a[start] == '-')
            return stod(a.substr(ini, start - ini)) + decode(a, start + 1, fim);
        else if(a[start] == '|')
            return stod(a.substr(ini, start - ini)) / 4 + decode(a, start + 1, fim) / 4;
        else if(a[start] == '('){
            int cont = 1, temp = start;
            while(cont && temp < fim){
                if(a[temp] == '(') cont++;
                else if(a[temp] == ')') cont--;
                temp++;
            }
            if(a[temp] == '-')
                return decode(a, start + 2, temp) + decode(a, temp + 1, fim);
            else if(a[temp] == '|')
                return decode(a, start + 2, temp) / 4 + decode(a, temp + 1, fim) / 4;
        }
        else
            return stod(a.substr(ini, fim - ini));           
    }
    else if(a[ini] == '('){
        int cont = 1, temp = ini + 1;
        while(cont && temp < fim){
            if(a[temp] == '(') cont++;
            else if(a[temp] == ')') cont--;
            temp++;
        }
        if(a[temp] == '-')
            return decode(a, ini + 1, temp) + decode(a, temp + 1, fim);
        else if(a[temp] == '|')
            return decode(a, ini + 1, temp) / 4 + decode(a, temp + 1, fim) / 4;
    }
    else
        return decode(a, ini + 1, fim);
    return 0;
}

int main(){
    string a;
    while(getline(cin, a)){
        cout << fixed << setprecision(3);
        cout << decode(a, 0, a.size()) << endl;
    }
    return 0;
}
