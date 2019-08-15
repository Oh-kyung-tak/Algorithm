#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

vector<pair<int, int>> v;
int N;
int cnt = 1;
int min_money;

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int x, y;
		cin >> x >> y;
		v.push_back({ x,y });
	}
	
	sort(v.begin(), v.end());
	min_money = v[0].second;

	for (int i = 1; i < v.size(); i++)
	{
		if (min_money > v[i].second)
		{
			cnt++;
			min_money = v[i].second;
		}
	}

	cout << cnt << endl;
}
