    #include <bits/stdc++.h>

    using namespace std;

    bool compare(int a, int b){
        return a >= b;
    }

    int solve(int* vet, int i, int n, int m, int sum){
        if(sum == m || i == n) return 0;
        else if(vet[i] + sum > m)
            return solve(vet, i+1, n, m, sum);
        else{
            int total = (m / vet[i]);
            int s1 = solve(vet, i + 1, n, m, sum);
            if(total){
                if(m % vet[i])
                    return total + min(s1, solve(vet, i + 1, n, m % vet[i], 0));
                else
                    return min(total + s1, total);
            }
            return s1; 
        }
        return 0;
    }

    int main(){
        int n;
        cin >> n;
        while(n--){
            int a, b;
            cin >> a >> b;
            int vet[a];
            for(int i = 0; i<a; i++) cin >> vet[i];
            sort(vet, vet + a, compare);
            int mn = 10000000;
            for(int i = 0; i<a; i++)
                mn = min(mn, solve(vet, i, a, b, 0));
            cout << mn << endl; 
        }
        return 0;
    }
