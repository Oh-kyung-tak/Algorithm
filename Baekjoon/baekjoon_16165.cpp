#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <queue> 
#include <string.h>
#include <map>

using namespace std;

int N, M;
string team_name;
string name;

map<string, string> m;

int main()
{
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		int cnt;
		cin >> team_name;
		cin >> cnt;

		for (int j = 0; j < cnt; j++)
		{
			cin >> name;
			m[name] = team_name;
		}
	}

	for (int i = 0; i < M; i++)
	{
		string temp;
		int cnt;
		cin >> temp >> cnt;

		if (cnt == 1)
			cout << m[temp] << endl;
		else
		{
			vector<string> v;
			for (auto it = m.begin(); it != m.end(); it++)
			{
				if (it->second == temp)
					v.push_back(it->first);
			}

			sort(v.begin(), v.end());

			for (int i = 0; i < v.size(); i++)
				cout << v[i] << endl;
		}
	}
}