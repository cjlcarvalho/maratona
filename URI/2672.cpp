#include <bits/stdc++.h>

using namespace std;

string binary(string a){
    string result;
    int start = 0, i;
    for(int j = 0; j < int(a.size()); j++){
        i = j;
        while(a[i] != '.' && i < int(a.size())) i++;
        int r = stoi(a.substr(j, i - j));
        while(r){
            result.insert(result.begin() + start, (r % 2) + 48);
            r /= 2;
        }
        if(result.size() % 8 > 0){
            int t = 8 - result.size() % 8;
            while(t){
                result.insert(result.begin() + start, '0');
                t--;
            }
        }
        j = i;
        start += 8;
    }
    if(result.size() < 32){
        int t = 32 - result.size();
        while(t){
            result.push_back('0');
            t--;
        }
    }
    return result;
}

int* ip(string bin){
    int *result = new int[4];
    int64_t m = stoull(bin, NULL, 2);
    for(int l = 3; l >= 0; l--){
        int o = 8, z = 1, total = 0;
        while(o--){
            total += z * (m % 2);
            m /= 2;
            z *= 2;
        }
        result[l] = total;
    }
    return result;
}

void showIp(int* ip){
    for(int i = 0; i<4; i++){
        cout << ip[i];
        if(i == 3)
            cout << endl;
        else cout << '.';
    }
}

string mask(int mascara){
    string result;
    for(int i = 0; i<mascara; i++) result.push_back('1');
    for(int i = 0; i<32-mascara; i++) result.push_back('0');
    return result;
}

int main(){
    string a, b;
    string bRede, bBroadcast, bMask;
    while(cin >> a){
        int i = a.size() - 1;
        while(a[i] != '/' && i >= 0) i--;
        if(i == -1){
            cin >> b;
            bRede = binary(a);
            bBroadcast = bRede;
            bMask = binary(b);
        }
        else{
            int j = i + 1;
            int mascara = stoi(a.substr(j, a.size() - j));
            bRede = binary(a.substr(0, i));
            bBroadcast = bRede;
            bMask = mask(mascara);
        }
        int j = 0, pt = 0;  
        for(; bMask[j] == '1'; j++){ pt++; }
        for(int k = j; k < int(bRede.size()); k++) bRede[k] = '0';
        for(int k = j; k < int(bBroadcast.size()); k++) bBroadcast[k] = '1';
        int* rRede = ip(bRede);
        int* rBroad = ip(bBroadcast);
        cout << "Endereco de rede: ";
        showIp(rRede);
        cout << "Endereco de broadcast: ";
        showIp(rBroad);
        cout << "Numero de maquinas: " << (1LL << (32 - pt)) - 2 << endl;
        cout << endl;
        delete[] rRede;
        delete[] rBroad;
    }
    return 0;
}
