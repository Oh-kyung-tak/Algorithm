#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int N;

vector<pair<int, int>>v;

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}

	for (int i = 0; i < v.size(); i++)
	{
		int w, h;
		w = v[i].first;
		h = v[i].second;
		int rank = 1;

		for (int j = 0; j < v.size(); j++)
		{
			if (v[j].first > w && v[j].second > h)
				rank++;
		}

		cout << rank << " ";
	}
}
