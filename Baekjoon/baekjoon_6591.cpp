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


int main()
{
	while (1)
	{
		long long int x, y;
		int div = 1;
		long long int ans = 1;
		cin >> x >> y;

		if (x == 0 && y == 0)
			break;

		if (x - y < y)
			y = x - y;

		while (y-- > 0)
		{
			ans *= x--;
			ans /= div++;
		}

		cout << ans << endl;
	}
}

