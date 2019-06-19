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

int N, M;
long long int min_p = 0;
long long int max_p = 1000000000000000000;
int people[1000001];

int main()
{
	cin >> N >> M;

	for (int i = 0; i < N; i++)
		cin >> people[i];

	while (min_p <= max_p)
	{
		long long int mid = (min_p + max_p) / 2;
		long long int temp = 0;

		for (int i = 0; i < N; i++)
			temp += mid / people[i];

		if (temp >= M)
			max_p = mid - 1;
		else
			min_p = mid + 1;

	}

	cout << min_p << endl;
}