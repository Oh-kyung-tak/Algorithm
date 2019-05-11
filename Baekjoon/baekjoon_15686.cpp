//15686번
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> chicken;
vector<int> chicken_index;
vector<pair<int, int>> house;

int M, N;
int cnt = 1;
int sum_location = 9999999999999;

int main()
{
	scanf("%d %d", &M, &N);

	for (int i = 1; i <= M; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			int num;
			scanf("%d", &num);
			if (num == 1)
				house.push_back(make_pair(i, j));
			else if (num == 2)
				chicken.push_back(make_pair(i, j));
		}
	}

	for (int i = 0; i < chicken.size(); i++)
	{
		if (cnt <= N)
		{
			chicken_index.push_back(1);
			cnt++;
		}
		else
			chicken_index.push_back(0);
	}

	do
	{
		int sum = 0;

		vector<pair<int, int>> temp_location;

		for (int i = 0; i < chicken_index.size(); i++)
		{
			if (chicken_index[i] == 1)
				temp_location.push_back(make_pair(chicken[i].first, chicken[i].second));
		}

		for (int i = 0; i < house.size(); i++)
		{
			int min_location = 99999999;
			for (int j = 0; j < temp_location.size(); j++)
			{
				int loc = abs(house[i].first - temp_location[j].first) + abs(house[i].second - temp_location[j].second);
				min_location = min(loc, min_location);
			}
			sum += min_location;
		}

		sum_location = min(sum, sum_location);

	} while (prev_permutation(chicken_index.begin(), chicken_index.end()));

	cout << sum_location << endl;
}
