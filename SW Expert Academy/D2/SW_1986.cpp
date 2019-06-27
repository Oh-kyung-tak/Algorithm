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
		int sum = 0;
		int N;
		cin >> N;

		for (int i = 1; i <= N; i++)
		{
			if (i % 2 == 0)
				sum -= i;
			else
				sum += i;
		}

		cout << "#" << k << " " << sum << endl;
	}
}