#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int a[n], b[n];

    for (int i = 0; i < n; i++) cin >> b[i];

    memset(a, 0, sizeof(a));
    
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        int diff = b[i] - a[i];
        
        if (!diff) continue;
            
        for (int j = i; j < n; j++) a[j] += diff;
            
        count += abs(diff);
    }
    
    cout << count << endl;
    
    return 0;
}
