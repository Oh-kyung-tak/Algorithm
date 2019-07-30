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

string word;
double y_x, y_y;
vector<pair<double, double>> v;
vector<int> idx;
double ans = 999999999;

int main()
{
	cin >> y_x >> y_y;
	for (int i = 0; i < 3; i++)
	{
		int a, b;
		cin >> a >> b;
		v.push_back({ a,b });
	}

	for (int i = 0; i < 3; i++)
		idx.push_back(i);

	do
	{
		double temp = 0;
		double t_x = y_x;
		double t_y = y_y;

		for (int i = 0; i < 3; i++)
		{
			temp += sqrt(pow(t_x - v[idx[i]].first, 2) + pow(t_y - v[idx[i]].second, 2));
			t_x = v[idx[i]].first;
			t_y = v[idx[i]].second;
		}
			
	
		ans = min(ans, temp);

	} while (next_permutation(idx.begin(), idx.end()));

	cout << floor(ans) << endl;
}