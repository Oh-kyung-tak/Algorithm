#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;
unsigned long long int v[1000001];
unsigned long long int sum = 0;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 1; i <= 1000000; i++)
	{
		sum += i;
		v[i] = v[i - 1] + sum;
	}

	while (1)
	{
		int n;
		cin >> n;
		if (n == 0)
			return 0;
		else
			cout << v[n] << '\n';
	}
}