#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>
#include <queue>

using namespace std;

signed long long int A, B;
signed long long int ans;
signed long long int sum1, sum2;
int main()
{
	cin >> A >> B;

	if (A > B)
	{
		int temp = A;
		A = B;
		B = temp;
	}

	if (B < 0)
	{
		A *= -1;
		B *= -1;
		sum1 = (A * (A + 1)) / 2;
		sum2 = (B * (B + 1)) / 2;

		ans = sum1 - sum2 + B;
		ans *= -1;
	}
	else if (A > 0)
	{
		sum1 = (A * (A + 1)) / 2;
		sum2 = (B * (B + 1)) / 2;

		ans = sum2 - sum1 + A;
	}
	else
	{
		if (A == 0)
			sum1 = 0;
		else
		{
			A *= -1;
			sum1 = (A * (A + 1)) / 2;
			sum1 *= -1;
		}

		if (B == 0)
			sum2 = 0;
		else
		{
			sum2 = (B * (B + 1)) / 2;
		}

		ans = sum1 + sum2;
	}

	cout << ans << endl;
}

