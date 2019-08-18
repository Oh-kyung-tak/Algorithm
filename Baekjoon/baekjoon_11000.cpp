#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>

using namespace std;

vector<pair<int, int>> v;
priority_queue<int, vector<int>, greater<int> > pq;
int N;

int main()
{
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);
		v.push_back({ x,y });
	}
	
	sort(v.begin(), v.end());
	pq.push(v[0].second);
	
	for (int i = 1; i < N; i++)
	{
		int s = v[i].first;
		int e = v[i].second;

		if (pq.top() > s)
			pq.push(e);
		else
		{
			pq.pop();
			pq.push(e);
		}
	}

	printf("%d", pq.size());
}