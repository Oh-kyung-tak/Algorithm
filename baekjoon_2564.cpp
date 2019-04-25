#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<string>
#include<vector>

using namespace std;
vector<pair<int,int>> store;
vector<pair<int, int>> pe;

int W, H;
int N;
int a, b;
int sum = 0;

int main()
{
	cin >> W >> H;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		int x, y;
		cin >> x >> y;
		store.push_back(make_pair(x, y));
	}

	cin >> a >> b;

	for (int i = 0; i < store.size(); i++)
	{
		int dir = store[i].first;
		int distance = store[i].second;

		if (a == 1)
		{
			if (dir == 1)
				sum += abs(distance - b);
			else if (dir == 2)
				sum += min((b + H + distance), (2 * W - distance - b + H));
			else if (dir == 3)
				sum += (b + distance);
			else
				sum += ((W - b) + distance);
		}
		else if (a == 2)
		{
			if (dir == 1)
				sum += min((b + H + distance), (2 * W - distance - b + H));
			else if (dir == 2)
				sum += abs(distance - b);
			else if (dir == 3)
				sum += (H - distance + b);
			else
				sum += (H - distance + W - b);
		}
		else if (a == 3)
		{
			if (dir == 1)
				sum += (distance + b);
			else if (dir == 2)
				sum += (H - b + distance);
			else if (dir == 3)
				sum += abs(distance - b);
			else
				sum += min((W + b + distance), (2 * H - distance - b + W));
		}
		else if (a == 4)
		{
			if (dir == 1)
				sum += (W - distance + b);
			else if (dir == 2)
				sum += (H - b + W - distance);
			else if (dir == 3)
				sum += min((W + b + distance), (2 * H - distance - b + W));
			else
				sum += abs(distance - b);
		}
	}

	cout << sum << endl;
}
