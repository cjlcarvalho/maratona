#include <iostream>

using namespace std;

int64_t* countDigits(int64_t a, int64_t b){
    int64_t* vetor = new int64_t[10];
    for(int i = 0; i<10; i++) vetor[i] = 0;
    int64_t temp;
    for(int64_t i = a; i<=b; i++){
        temp = i;
        while(temp > 0){
            vetor[temp % 10]++;
            temp /= 10;
        }
    }
    return vetor;
}

int main(){
    int64_t* nums;
    int64_t a, b;
    while(cin >> a >> b){
        if(a == 0 && b == 0) break;
        nums = countDigits(a, b);
        for(int i = 0; i<10; i++){
            cout << nums[i];
            if(i != 9) cout << " ";
            else cout << endl;
        }
        delete nums; 
    }
    return 0;
}
