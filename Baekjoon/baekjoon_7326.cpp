#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>
#include <functional>

using namespace std;

int N;

int main()
{
	cin >> N;

	while (N--)
	{
		int x, y;
		int cnt = 0;
		
		cin >> x >> y;
		if (x - y == 2 || x - y == 0)
		{
			for (int i = 1; i <= x; i++)
			{
				if (i % 2 == 1)
					cnt += 1;
				else
					cnt += 3;
			}

			if (x == y)
				cout << cnt << endl;
			else
				cout << cnt - 2 << endl;
		}
		else
		{
			cout << "No Number" << endl;
		}
	}
}