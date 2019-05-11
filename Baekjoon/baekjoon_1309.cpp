#include <stdio.h>
#include <string.h>

int main()
{
	long long int N[100001];

	N[0] = 1;
	N[1] = 3;

	int num;

	scanf("%d", &num);

	for (int i = 2; i <= num; i++)
	{
		N[i] = N[i - 1] * 2 + N[i - 2];
		N[i] = N[i] % 9901;
	}

	printf("%lld", N[num] % 9901);
}
