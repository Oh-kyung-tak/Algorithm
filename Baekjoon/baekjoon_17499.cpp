#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

int N, Q;
int start = 0;

vector<int> v;

int main()
{
	cin >> N >> Q;

	vector<int> v;
	
	for (int i = 0; i < N; i++)
	{
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}

	while (Q--)
	{
		int cnt;
		cin >> cnt;

		if (cnt == 1)
		{
			int x, y;
			cin >> x >> y;
			
			v[(start + (x - 1)) % v.size()] += y;
		}
		else if (cnt == 2)
		{
			int x;
			cin >> x;
			start = start - (x % v.size());

			if (start < 0)
				start += v.size();
		}
		else
		{
			int x;
			cin >> x;
			start = start + (x % v.size());

			if (start > v.size() - 1)
				start -= v.size();
		}
	}

	for (int i = start; i < v.size(); i++)
		cout << v[i] << " ";
	
	for (int i = 0; i < start; i++)
		cout << v[i] << " ";

	return 0;
}