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
		int sum = 0;

		for (int i = 0; i < 10; i++)
		{
			int num;
			cin >> num;

			if (num % 2 == 1)
				sum += num;
		}

		cout << "#" << k << " " << sum << endl;
	}
}