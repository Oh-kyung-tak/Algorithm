#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int T;

int main()
{
	cin >> T;

	for (int k = 1; k <= T; k++)
	{
		int a, b;
		char c;

		cin >> a >> b;
		if (a > b)
			c = '>';
		else if (a < b)
			c = '<';
		else
			c = '=';

		cout << "#" << k << " " << c << endl;
	}
}