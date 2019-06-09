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

int T;

int main()
{
	cin >> T;

	while (T--)
	{
		int V, E;
		cin >> V >> E;

		int sum = V - E;
		int x = 2 - sum;

		cout << x << endl;
	}
}