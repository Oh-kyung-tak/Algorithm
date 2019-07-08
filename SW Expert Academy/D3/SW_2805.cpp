#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>
#include <queue>

using namespace std;

int T;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		char farm[51][51];
		int N;
		int sum = 0;

		cin >> N;

		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
				cin >> farm[i][j];
		}

		int first = (N / 2) + 1;
		int last = (N / 2) + 1;

		for (int i = 1; i <= N; i++)
		{
			for (int j = first; j <= last; j++)
				sum += farm[j][i] - '0';

			if (i < (N / 2) + 1)
			{
				first -= 1;
				last += 1;
			}
			else
			{
				first += 1;
				last -= 1;
			}
		}

		cout << "#" << Test_case << " " << sum << endl;
	}
}