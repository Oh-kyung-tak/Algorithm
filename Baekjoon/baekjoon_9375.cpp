#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <queue>

using namespace std;

int T;

int main()
{
	scanf("%d", &T);

	while (T--)
	{
		map<string, int> m;
		int result = 1;
		int tmp;

		scanf("%d", &tmp);

		for (int i = 0; i < tmp; i++)
		{
			string aa, bb;
			cin >> aa >> bb;

			if (m[bb] == 0)
				m[bb] = 1;
			else
				m[bb]++;
		}

		for (auto kind : m)
		{
			result *= (kind.second + 1);
		}

		cout << result - 1 << endl;
	}
}
