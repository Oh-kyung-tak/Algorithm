#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>
#include <map>

using namespace std;

vector<pair<int, int>> v;

int N;
int sum = 0;
int cnt;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int x, y;
		cin >> x >> y;
		v.push_back({ y, x });
	}
	
	sort(v.begin(), v.end());

	cnt = v[0].first;

	for (int i = 0; i < v.size(); i++)
	{
		if (i == 0)
		{
			if (v[i + 1].first == cnt)
				sum += v[i + 1].second - v[i].second;
		}
		else if (i == v.size() - 1)
		{
			if (v[i - 1].first == cnt)
				sum += v[i].second - v[i - 1].second;
		}
		else
		{
			if (v[i + 1].first == cnt)
			{
				if (v[i - 1].first == cnt)
					sum += min(v[i].second - v[i - 1].second, v[i + 1].second - v[i].second);
				else
					sum += v[i + 1].second - v[i].second;
			}
			else
			{
				sum += v[i].second - v[i - 1].second;
				cnt = v[i + 1].first;
			}
		}
	}

	cout << sum << endl;
}