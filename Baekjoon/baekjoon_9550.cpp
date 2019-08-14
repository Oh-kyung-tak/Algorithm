#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>
#include <queue>

using namespace std;

int T;

int main()
{
	cin >> T;

	while (T--)
	{
		int n, k;
		int sum = 0;

		cin >> n >> k;

		for (int i = 0; i < n; i++)
		{
			int temp;
			cin >> temp;
			sum += temp / k;
		}

		cout << sum << endl;
	}
}

