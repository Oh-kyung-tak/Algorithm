#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int T;
int num[1001];
int dp[1001];

int main()
{
	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		long long int N;
		long long int a, b, c;

		cin >> N;

		a = N * (N + 1) / 2;
		b = N * N;
		c = N * N + N;

		cout << "#" << Test_case << " " << a << " " << b << " " << c << endl;

	}
}