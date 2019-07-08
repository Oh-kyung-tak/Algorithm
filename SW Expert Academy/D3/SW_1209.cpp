#include <iostream>
#include <math.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <vector>
#include <stack>

using namespace std;
int T, test_case;
int num[101][101];


int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (test_case = 0; test_case < 10; test_case++)
	{
		int N;
		int sum = 0;
		int temp = 0;
		cin >> N;

		for (int i = 1; i <= 100; i++)
			for (int j = 1; j <= 100; j++)
				cin >> num[i][j];

		for (int i = 1; i <= 100; i++)
		{
			temp = 0;
			for (int j = 1; j <= 100; j++)
				temp += num[i][j];

			sum = max(sum, temp);
		}

		for (int i = 1; i <= 100; i++)
		{
			temp = 0;
			for (int j = 1; j <= 100; j++)
				temp += num[j][i];

			sum = max(sum, temp);
		}
		
		temp = 0;

		for (int i = 1; i <= 100; i++)
			temp += num[i][i];

		sum = max(sum, temp);
		temp = 0;

		for (int i = 1; i <= 100; i++)
			temp += num[i][101 - i];

		sum = max(sum, temp);

		cout << "#" << test_case + 1 << " " << sum << endl;
	}

	return 0;
}