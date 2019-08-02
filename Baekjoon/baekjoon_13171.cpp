#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

long long int A, X;
long long int mod = 1000000007;
long long int cnt = 2;
long long int start = 0;
long long int ans = 1;

vector<pair<long long int, long long int>> v;

int main()
{
	cin >> A >> X;
	v.push_back({ 1, A % mod});

	while (1)
	{
		if (cnt > X)
			break;

		v.push_back({ cnt, (v[start].second % mod) * (v[start].second % mod) % mod });
		cnt *= 2;
		start += 1;
	}


	for (int i = v.size() - 1; i >= 0; i--)
	{
		if (v[i].first <= X)
		{
			ans = ((ans % mod) * (v[i].second % mod)) % mod;
			X -= v[i].first;
		}
	}

	cout << ans << endl;
}