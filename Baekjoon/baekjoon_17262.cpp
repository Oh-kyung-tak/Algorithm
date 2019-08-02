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

vector<pair<int, int>> v;
int sum = 0;
int N;
int cnt;

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

	cnt = v[0].second;

	for (int i = 1; i < N; i++)
	{
		if (v[i].second < cnt)
			cnt = v[i].second;

		if (v[i].first > cnt)
		{
			sum += v[i].first - cnt;
			cnt = v[i].first;
		}
	}

	cout << sum << endl;
}