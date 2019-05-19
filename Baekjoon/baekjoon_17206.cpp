#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
using namespace std;

int T;
int sum[80001];
int main()
{
	scanf("%d", &T);

	for (int i = 1; i <= 80000; i++)
	{
		if (i % 3 == 0 || i % 7 == 0)
			sum[i] = sum[i - 1] + i;
		else
			sum[i] = sum[i - 1];
	}

	while (T--)
	{
		int temp;
		scanf("%d", &temp);
		

		printf("%d\n", sum[temp]);
	}
}