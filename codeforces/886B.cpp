#include <bits/stdc++.h>

using namespace std;

int main(){
    map<int, int> days;
    int n, m;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> m;
        days[m] = i;
    }
    int min = 10000000;
    int day = 0;
    for(auto i = days.begin(); i != days.end(); i++)
        if((*i).second < min){
            day = (*i).first;
            min = (*i).second;
        }
    cout << day << endl;
    return 0;
}
