#include <iostream>

using namespace std;

int main(){
    int par[5];
    int impar[5];
    int ip, imp;
    ip = imp = 0;
    int n;
    for(int i = 0; i<15; i++){
        cin >> n;
        if(n % 2 == 0){
            if(ip == 5){
                for(int i = 0; i<5; i++)
                    cout << "par[" << i << "] = " << par[i] << endl;
                ip = 0;
            }
            par[ip] = n;
            ip++;
        }
        else{
            if(imp == 5){
                for(int i = 0; i<5; i++)
                    cout << "impar[" << i << "] = " << impar[i] << endl;
                imp = 0;
            }
            impar[imp] = n;
            imp++;
        }
    }
    for(int i = 0; i<imp; i++)
        cout << "impar[" << i << "] = " << impar[i] << endl;
    for(int i = 0; i<ip; i++)
        cout << "par[" << i << "] = " << par[i] << endl;
    return 0;
}
