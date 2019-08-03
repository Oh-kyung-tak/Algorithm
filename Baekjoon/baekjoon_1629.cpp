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

long long int A, B, C;
long long int cnt = 2;
long long int start = 0;
long long int ans = 1;

vector<pair<long long int, long long int>> v;

int main()
{
	cin >> A >> B >> C;
	v.push_back({ 1, A % C });

	while (1)
	{
		if (cnt > B)
			break;

		v.push_back({ cnt, (v[start].second % C) * (v[start].second % C) % C });
		cnt *= 2;
		start += 1;
	}


	for (int i = v.size() - 1; i >= 0; i--)
	{
		if (v[i].first <= B)
		{
			ans = ((ans % C) * (v[i].second % C)) % C;
			B -= v[i].first;
		}
	}

	cout << ans << endl;
}