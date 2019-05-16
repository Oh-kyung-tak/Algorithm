#include <iostream>
#include <string>
#include <string.h>
#include <queue>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;
int N, M;

int sum = 0;
int main()
{
	cin >> N >> M;

	sum += N;

	while (N)
	{
		sum += N / M;
		N /= M;
	}

	cout << sum << endl;
}