#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <math.h>
#include <set>

using namespace std;
int N;
int sum = 0;

int main()
{
	cin >> N;

	while (N--)
	{
		int x, y;
		cin >> x >> y;

		sum += (x * y);
	}

	cout << sum << endl;
}

