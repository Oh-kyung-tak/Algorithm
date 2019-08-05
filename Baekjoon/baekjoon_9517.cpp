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

int n;
int q;
int sum = 0;
vector<pair<int, char>> v;

int main()
{
	cin >> n;
	cin >> q;

	for (int i = 0; i < q; i++)
	{
		int num;
		char c;
		cin >> num >> c;
		v.push_back({ num,c });
	}

	for (int i = 0; i < v.size(); i++)
	{
		sum += v[i].first;

		if (sum >= 210)
			break;
		
		if (v[i].second == 'T')
		{
			if (n == 8)
				n = 1;
			else
				n += 1;
		}
	}

	cout << n << endl;
}
