#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int d, n, m;
int s = 0;
int e;
int ans = -1;
vector<int> v;

//시작점, 끝점 예외 처리
int main()
{
	cin >> d >> n >> m;

	e = d;

	for (int i = 0; i < n; i++)
	{
		int n;
		cin >> n;
		v.push_back(n);
	}

	v.push_back(0);
	v.push_back(d);
	sort(v.begin(), v.end());

	while (s <= e)
	{
		int mid = (s + e) / 2;
		int pos = 0, cnt = 0;

		for (int i = 1; i < v.size(); i++)
		{
			if (v[i] - v[pos] < mid)
				cnt++;
			else
				pos = i;
		}

		if (cnt > m)
			e = mid - 1;
		else
		{
			ans = mid;
			s = mid + 1;
		}
	}

	cout << ans << endl;
}

