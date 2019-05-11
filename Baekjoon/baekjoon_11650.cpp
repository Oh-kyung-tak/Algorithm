#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

vector<pair<int,int>> v;

bool compare(const pair<int, int> &v1, const pair<int, int> &v2)
{
	if (v1.first == v2.first)
		return v1.second < v2.second;
	return v1.first < v2.first;
}
int main()
{
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);
		v.push_back(make_pair(x, y));
	}
	
	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < N; i++)
		printf("%d %d\n", v[i].first, v[i].second);
	
}
