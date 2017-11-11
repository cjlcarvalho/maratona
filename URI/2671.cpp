#include <bits/stdc++.h>

using namespace std;

string bfs(char* str, int n){
    bool visited[n];
    memset(visited, false, sizeof(visited));
    string result;
    int meio = (n % 2 == 0) ? n / 2 : n / 2 + 1;
    queue< vector<int> > q;
    vector<int> v;
    v.push_back(meio);
    v.push_back(0);
    v.push_back(n - 1);
    q.push(v);
    visited[meio] = true;
    while(!q.empty()){
        vector<int> current = q.front();
        q.pop();
        result.push_back(str[current[0]]);
        visited[current[0]] = true;
        cout << current[0] << endl;
        if((current[0] - 1) >= 0 && !visited[current[0] - 1]){
            meio = (current[0] - current[1])/2;
            vector<int> v;
            v.push_back(meio);
            v.push_back(current[1]);
            v.push_back(current[0]-1);   
            q.push(v);     
        }
        if((current[0] + 1) < n && !visited[current[0] + 1]){
            meio = (current[2] - current[0])/2;
            vector<int> v;
            v.push_back(meio);
            v.push_back(current[0] + 1);
            v.push_back(current[2]);
            q.push(v);
        }
    }
    return result;
}

int main(){
	char* str;
	int n;
	while(cin >> n){
		if(n == 0) break;
		str = new char[n];
		scanf(" %[^\n]s", str);
		cout << bfs(str, (n % 2) ? n : n - 1) << endl;
		delete str;
	}
	return 0;
}
