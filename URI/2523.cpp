#include <iostream>

using namespace std;

int main(){
    string n;
    int x, y;
    while(cin >> n >> x){
        int* nums = new int[x];
        for(int i = 0; i<x; i++){
            cin >> nums[i];
        }
        for(int i = 0; i<x; i++)
            cout << n[nums[i] - 1];
        cout << endl;
    }
    return 0;
}
