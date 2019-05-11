#include <iostream>
#include <queue>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;
vector<pair<int, int>>v;

bool compare(const pair<int, int> &v1, const pair<int, int> &v2)
{
	if (v1.second == v2.second)
		return v1.first < v2.first;
	else
		return v1.second < v2.second;
}
int main(void)
{
	int N;
	int start = -1;
	int finish = -1;
	int count = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		v.push_back(make_pair(a, b));
	}

	sort(v.begin(), v.end(), compare);


	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].first >= finish)
		{
			finish = v[i].second;
			count++;
		}
	}

	printf("%d", count);
}
