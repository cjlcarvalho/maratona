#include <bits/stdc++.h>

using namespace std;

int dist(int a, int b) {
    return abs(a - b);
}

int main() {
    int n;
    cin >> n;
    int vet[n];
    for (int i = 0; i < n; i++) cin >> vet[i];
    int you = 1, friendp = 1000000;
    
    int result = 0;
    
    int i = 0, j = n - 1;
    
    while (i <= j) {
        if (dist(you, vet[i]) <= dist(friendp, vet[i])) {
            if (dist(friendp, vet[j]) < dist(you, vet[j])) {
                result += max(dist(you, vet[i]), dist(friendp, vet[j]));
                you = vet[i];
                friendp = vet[j];
                i++;
                j--;
            }
            else {
                result += dist(you, vet[i]);
                you = vet[i];
                i++;
            }
        }
        else {
            result += dist(friendp, vet[i]);
            friendp = vet[i];
            i++;
        }
    }
    cout << result << endl;
    return 0;
}
