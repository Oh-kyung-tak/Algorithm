#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int T;

int main()
{
	scanf("%d", &T);

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		long long int num;

		scanf("%lld", &num);

		while (1)
		{
			long long int sum = 0;

			if (num < 10)
				break;
			
			while (num)
			{
				sum += num % 10;
				num /= 10;
			}

			num = sum;
		}

		printf("#%d %lld\n", Test_case, num);
	}
}