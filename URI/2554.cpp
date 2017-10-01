#include <bits/stdc++.h>

using namespace std;

struct Date{
    unsigned int day;
    unsigned int mon;
    unsigned int year;
    
    Date(string date){
        int D, M, Y, i, base, temp;
        D = M = Y = i = 0;
        base = 1;
        while(date[i+1] != '/')
            i++;
        temp = i+2; 
        while(i >= 0){
            D += (date[i] - 48) * base;
            base *= 10;
            i--;
        }
        i = temp; 
        base = 1;
        while(date[i+1] != '/')
            i++;
        temp = i+2;
        while(date[i] != '/'){
            M += (date[i] - 48) * base;
            base *= 10;
            i--;
        }
        i = temp; 
        base = 1;
        while(i < int(date.size()))
            i++;
        while(date[i] != '/'){
            Y += (date[i] - 48) * base;
            base *= 10;
            i--;
        }
        this->day = D;
        this->mon = M;
        this->year = Y;
    };
};

void lowerDate(string& first, string second, Date* f){
    Date* s = new Date(second);
    if(s->year < f->year){
        f = s;
        first = second;
    }
    else if(f->year == s->year && s->mon < f->mon){
        f = s;
        first = second;
    }
    else if(f->year == s->year && f->mon == s->mon && s->day < f->day){
        f = s;
        first = second;
    }
}

int main(){
    int n, m, p, cont;
    string date, maior;
    Date* data = NULL;
    while(cin >> n >> m){
        maior.clear();
        for(int i = 0; i<m; i++){
            cin >> date;
            cont = 0;
            for(int j = 0; j<n; j++){
                cin >> p;
                if(p) cont++;
            }
            if(cont == n){
                if(!maior.size()){
                    maior = date;
                    data = new Date(maior);
                }
                else
                    lowerDate(maior, date, data);
            }
        }
        if(maior.size())
            cout << maior << endl;
        else
            cout << "Pizza antes de FdI" << endl;
    }
    return 0;
}
