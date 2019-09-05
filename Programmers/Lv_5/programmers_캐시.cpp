#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool cmp(const pair<string, int> & a, const pair<string, int> &b)
{
	return a.second > b.second;
}

int solution(int cacheSize, vector<string> cities) {
	int answer = 0;
	vector<pair<string, int>> v;

	for (int i = 0; i < cities.size(); i++)
	{
		bool ck = false;
		transform(cities[i].begin(), cities[i].end(), cities[i].begin(), ::tolower);

		for (int j = 0; j < v.size(); j++)
		{
			if (cities[i] == v[j].first)
			{
				v[j].second = i;
				ck = true;
				break;
			}
		}

		if (!ck)
			v.push_back({ cities[i], i });

		if (v.size() > cacheSize)
		{
			sort(v.begin(), v.end(), cmp);
			v.pop_back();
		}

		if (ck)
			answer += 1;
		else
			answer += 5;
	}

	return answer;
}