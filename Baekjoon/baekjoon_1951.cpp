#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

long long int sum = 0;
long long int N[11] = { 0,9,90,900,9000,90000,900000,9000000,90000000,900000000,9000000000 };
long long int num;
long long int cnt = 1;
long long int start = 1;

int main()
{
	cin >> num;

	while (1)
	{
		if (start > num / 10)
			break;

		sum = ((sum % 1234567) + ((N[cnt] * cnt) % 1234567)) % 1234567;

		start *= 10;
		cnt++;
	}

	sum = ((sum % 1234567) + (num - start + 1) * cnt % 1234567) % 1234567;

	cout << sum << endl;
}
