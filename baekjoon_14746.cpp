#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

vector<pair<int,int>> v;

int main(void)
{
	int n, m;
	int c1, c2;
	int min = 99999999999;
	int count = 0;

	scanf("%d %d", &n, &m);
	scanf("%d %d", &c1, &c2);

	for (int i = 0; i < n; i++)
	{
		int num;
		scanf("%d", &num);
		v.push_back(make_pair(num, 0));
	}

	for (int i = 0; i < m; i++)
	{
		int num;
		scanf("%d", &num);
		v.push_back(make_pair(num, 1));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size() - 1; i++)
	{
		if (v[i].second != v[i + 1].second)
		{
			int cal = abs(v[i].first - v[i + 1].first);

			if (min > cal)
			{
				min = cal;
				count = 1;
			}
			else if (min == cal)
				count++;
		}
	}
	
	printf("%d %d", min + abs(c1 - c2), count);
}
