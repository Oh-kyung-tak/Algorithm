#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int T;
int map[8][8];
int A[21];
int B[21];
int main()
{
	cin >> T;

	for (int k = 1; k <= T; k++)
	{
		int max_num = -999999999;
		int a, b;
		cin >> a >> b;

		for (int i = 1; i <= a; i++)
			cin >> A[i];

		for (int i = 1; i <= b; i++)
			cin >> B[i];

		if (a < b)
		{
			for (int i = 1; i <= (b - a) + 1; i++)
			{
				int sum = 0;
				for (int j = 1; j <= a; j++)
					sum += A[j] * B[(j + i) - 1];

				max_num = max(sum, max_num);
			}
		}
		else
		{
			for (int i = 1; i <= (a - b) + 1; i++)
			{
				int sum = 0;
				for (int j = 1; j <= b; j++)
					sum += A[(j + i) - 1] * B[j];

				max_num = max(sum, max_num);
			}
		}

		cout << "#" << k << " " << max_num << endl;

	}
}