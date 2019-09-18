#include <iostream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <string.h>
#include <string>

using namespace std;

int N;
int cnt = 0;

int main()
{
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		for (int j = i; j <= N; j++)
		{
			if (N < ((i + j) * (j - i + 1) / 2))
				break;

			if (N == ((i + j) * (j - i + 1) / 2))
				cnt++;
		}
	}

	cout << cnt << endl;
}