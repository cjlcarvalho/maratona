#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int *x, *y, *z, *index;
    char* op;
    char foo;
    string *nomes;
    
    while(cin >> n){
        x = new int[n];
        y = new int[n];
        z = new int[n];
        index = new int[n];
        nomes = new string[n];
        op = new char[n];
        
        for(int i = 0; i<n; i++)
            cin >> x[i] >> y[i] >> foo >> z[i];
        
        for(int i = 0; i<n; i++)
            cin >> nomes[i] >> index[i] >> op[i];
            
        vector<string> losers;
        vector<string> winners;
        
        for(int i = 0; i<n; i++){
            int total;
            if(op[i] == '+')
                total = x[index[i] - 1] + y[index[i] - 1]; 
            else if(op[i] == '-')
                total = x[index[i] - 1] - y[index[i] - 1];
            else if(op[i] == '*')
                total = x[index[i] - 1] * y[index[i] - 1];
            if(total != z[index[i] - 1]) 
                losers.push_back(nomes[i]);
            else
                winners.push_back(nomes[i]);
        }
        
        if(losers.size() > 0){
            for(int i = 0; i<losers.size(); i++){
                cout << losers[i];
                if(i == losers.size() - 1)
                    cout << endl;
                else
                    cout << " ";
            }
        }
        else if(losers.size() == 0 && winners.size() == n)
            cout << "You Shall All Pass!" << endl;
        else if(losers.size() == n && winners.size() == 0)
            cout << "None Shall Pass!" << endl;
        
        delete x;
        delete y;
        delete z;
        delete index;
        delete nomes;
        delete op;
    }
    return 0;
}
