#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>

using namespace std;

vector<pair<int, int>> v;
int N;
int last;
int sum = 0;

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a >> b;
		v.push_back({ a,b });
	}

	sort(v.begin(), v.end());

	sum = v[0].second - v[0].first;
	last = v[0].second;

	for (int i = 1; i < v.size(); i++)
	{
		if (v[i].first > last)
		{
			sum += v[i].second - v[i].first;
			last = v[i].second;
		}
		else
		{
			if (v[i].second > last)
			{
				sum += v[i].second - last;
				last = v[i].second;
			}
		}
	}

	cout << sum << endl;
}