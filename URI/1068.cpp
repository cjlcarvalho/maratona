#include <bits/stdc++.h>

using namespace std;

bool solution(string x){
    queue<char> q;
    int total = 0;
    for(char c : x)
        if(c == '(' || c == ')')
            q.push(c);
    while(!q.empty()){
        char current = q.front();
        q.pop();
        if(current == '(')
            total++;
        else
            total--;
        if(total < 0) return false;
    }
    if(total > 0) return false;
    else return true;
}

int main(){
    string x;
    while(cin >> x){
        if(solution(x))
            cout << "correct" << endl;
        else
            cout << "incorrect" << endl;
    } 
    return 0;
}
