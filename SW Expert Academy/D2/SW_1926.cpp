#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;

int main()
{
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		int cnt = 0;
		int num = i;

		while (num)
		{
			int temp = num % 10;

			if (temp > 0 && temp % 3 == 0)
				cnt++;

			num /= 10;
		}

		if (cnt > 0)
		{
			for (int j = 0; j < cnt; j++)
				cout << "-";

			cout << " ";
		}
		else
			cout << i << " ";
	}
}