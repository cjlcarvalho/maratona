#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;

    cin >> n;
    
    vector<int> l;
    
    int size = n - 1;
    int min;
    
    for (int i = 0; i < n; i++) {
        cin >> m;
        
        min = 0;
        
        for (auto it = l.begin(); it != l.end(); it++)
            if (*it < m)
                min++;
            
        l.push_back(m);
        
        cout << m - min << (size ? " " : "\n");
        
        size--;
    }

    return 0;
}
