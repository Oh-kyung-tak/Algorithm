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
int N;

int main()
{
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		bool ck = false;
		long long int a, b, c;
		cin >> a >> b >> c;

		if (pow(a, 2) + pow(b, 2) == pow(c, 2))
			ck = true;

		if (pow(a, 2) + pow(c, 2) == pow(b, 2))
			ck = true;

		if (pow(b, 2) + pow(c, 2) == pow(a, 2))
			ck = true;

		cout << "Case #" << i << ": ";
		if (ck)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}