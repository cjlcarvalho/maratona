#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int n, i = 1;
    
    cin >> n;
    
    vector<long> numbers({1, 1});
    
    while (numbers.size() < n) {
        numbers.push_back(numbers[i] + numbers[i-1]);
        i++;
    }
    
    for (int x = n - 1; x >= 0; x--)
        cout << numbers[x] << (x == 0 ? "\n" : " ");
    
    return 0;
}
