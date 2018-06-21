#include <bits/stdc++.h>

/*
 * Given a target amount V cents and a list of denominations of N coins,
 * i.e. We have coinValue[i] (in cents) for coin type i E [0 .. N-1], what is the
 * minimum number of coins that we must use to obtain amount V?
 * Assume that we have unlimited supply of coins of any type.
 */

using namespace std;

int solve(int *coins, int n, int value)
{
	if (!value) return 0;
	else if (value < 0) return 1000000;
	
	int m = 1000000;
	for (int i = 0; i < n; i++)
		m = min(m, solve(coins, n, value - coins[i]));

	return 1 + m;
}

int main()
{
	int v, n;

	cin >> v >> n;

	int coins[n];

	for (int i = 0; i < n; i++) cin >> coins[i];

	cout << solve(coins, n, v) << endl;

	return 0;
}

