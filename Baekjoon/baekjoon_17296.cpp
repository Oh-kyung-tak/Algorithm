#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>

using namespace std;
vector<pair<int, int>> v;
int N;
int sum = 0;

int main()
{
	cin >> N;
	v.resize(N);

	for (int i = 0; i < N; i++)
	{
		double t;
		cin >> t;
		v[i].first = (int)t;
		v[i].second = 0;
		if (t - (int)t > 0.1) 
			v[i].second = 1;
	}

	sum = v[0].first;
	if (v[0].second == 1)
		sum++;

	for (int i = 1; i < N; i++)
	{
		if (v[i].second == 1 && sum == 0)
			sum++;
		sum += v[i].first;
	}

	cout << sum << endl;
}