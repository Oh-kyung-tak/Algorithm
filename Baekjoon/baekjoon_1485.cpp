#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>
#include <map>

using namespace std;

int T;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;

	while (T--)
	{
		vector<pair<double,double>> v;
		set<double> s;

		for (int i = 0; i < 4; i++)
		{
			double x, y;
			cin >> x >> y;
			v.push_back({ x,y });
		}

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (i != j)
					s.insert(pow(abs(v[i].first - v[j].first), 2) + pow(abs(v[i].second - v[j].second), 2));
			}	
		}

		if (s.size() == 2)
			cout << "1" << endl;
		else
			cout << "0" << endl;
	}
}