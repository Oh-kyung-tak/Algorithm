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

int N;
int time = -1;
int start = 600;
int e = 1320;
vector<pair<int, int>> v;

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int x, y;
		cin >> x >> y;
		v.push_back({ (x / 100) * 60 + x % 100,(y / 100) * 60 + y % 100 });
	}
	
	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++)
	{
		if (i == 0)
		{
			int temp = v[i].first - start - 10;
			if (temp >= 0)
				time = max(time, temp);

			start = v[i].second;
		}
		else
		{
			if (v[i].first >= start)
			{
				time = max(time, v[i].first - start - 20);
				start = max(start, v[i].second);
			}
			else
				start = max(start, v[i].second);
		}
	}
	time = max(time, e - start - 10);

	cout << time << endl;
}