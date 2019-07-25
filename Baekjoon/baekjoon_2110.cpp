#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>
#include <map>

using namespace std;

int N, C;
vector<int> v;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> C;

	for (int i = 0; i < N; i++)
	{
		int n;
		cin >> n;
		v.push_back(n);
	}

	sort(v.begin(), v.end());

	int left = 1;
	int right = v[v.size() - 1] - v[0];
	int d = 0;
	int ans = 0;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		int start = v[0];
		int cnt = 1;

		for (int i = 1; i < N; i++)
		{
			d = v[i] - start;

			if (mid <= d)
			{
				cnt++;
				start = v[i];
			}
		}

		if (cnt >= C)
		{
			ans = mid;
			left = mid + 1;
		}
		else
			right = mid - 1;
	}

	cout << ans << endl;
}