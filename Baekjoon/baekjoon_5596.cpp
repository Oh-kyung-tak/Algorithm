#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>

using namespace std;

int N;
int sum = 0;

int main()
{
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= sqrt(i); j++)
		{
			if (i % j == 0)
				sum++;
		}
	}

	cout << sum << endl;
}