#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>
#include <functional>

using namespace std;

int N;
int sum;

int main()
{
	cin >> N;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < N; j++)
		{
			int num;
			cin >> num;
			sum += abs(num);
		}
	}

	cout << sum << endl;
}