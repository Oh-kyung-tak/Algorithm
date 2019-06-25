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
		double sum = 0;

		for (int i = 0; i < 10; i++)
		{
			int num;
			cin >> num;

			sum += num;
		}

		cout << "#" << k << " " << floor(sum / 10 + 0.5) << endl;
	}
}