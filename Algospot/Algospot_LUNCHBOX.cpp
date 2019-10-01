#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <queue>

using namespace std;

int T;
int N;

int main()
{
	cin >> T;

	while (T--)
	{
		int N;
		int max_time = -1;
		int time = 0;

		cin >> N;
		vector<pair<int, int>> v(N);

		for (int i = 0; i < N; i++)
		{
			int temp;
			cin >> temp;
			v[i].second = temp;
		}

		for (int i = 0; i < N; i++)
		{
			int temp;
			cin >> temp;
			v[i].first = temp;
		}

		sort(v.begin(), v.end(), greater<pair<int, int>>());

		for (int i = 0; i < v.size(); i++)
		{
			time += v[i].second;

			max_time = max(max_time, time + v[i].first);
		}

		cout << max_time << endl;
	}
	
}