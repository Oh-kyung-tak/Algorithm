#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>
#include <queue>

using namespace std;

long long int dp[1000001];
int n;

int main()
{
	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= 1000000; i++)
		dp[i] = ((dp[i - 1] % 1000000000) + (dp[i - 2] % 1000000000)) % 1000000000;

	cin >> n;

	if (n < 0)
	{
		n *= -1;
		if (n % 2 == 0)
			cout << "-1" << endl;
		else
			cout << "1" << endl;
			
		cout << dp[n] % 1000000000 << endl;
	}
	else
	{
		if (n == 0)
			cout << "0" << endl;
		else
			cout << "1" << endl;

		cout << dp[n] % 1000000000 << endl;
		
	}
}

