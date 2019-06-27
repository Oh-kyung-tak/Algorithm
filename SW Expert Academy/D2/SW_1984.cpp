#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int T;

int main()
{
	cin >> T;

	for (int k = 1; k <= T; k++)
	{
		double sum = 0;
		int min_num = 10000;
		int max_num = 0;

		for (int i = 0; i < 10; i++)
		{
			int num;
			cin >> num;
			min_num = min(min_num, num);
			max_num = max(max_num, num);

			sum += num;
		}
		sum -= min_num + max_num;

		cout << "#" << k << " " << floor(sum / 8 + 0.5) << endl;
	}
}