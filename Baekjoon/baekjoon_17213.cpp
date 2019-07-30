#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

long long int a = 1, b = 1;
long long int N, M;

int main()
{
	cin >> N >> M;

	M = M - N;
	N = N + M - 1;

	if (M == 0)
	{
		cout << "1";
		return 0;
	}
	else
	{
		if (N - M < M)
			M = N - M;

		for (int i = N; i > N - M; i--)
			a *= i;

		for (int i = M; i > 0; i--)
			b *= i;

		cout << a / b;
	}
}