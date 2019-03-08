#include <stdio.h>
long long int A[101];
long long int B[101];
int main()
{
    long long int N;
	long long int i;
	scanf("%lld", &N);
	for (i = 1; i <= N; i++)
	{
		scanf("%lld", &B[i]);
	}
	for (i = 1; i <= N; i++)
	{
		A[i] = i * B[i] - (i - 1)*B[i - 1];
	}
	for (i = 1; i <= N; i++)
	{
		printf("%lld ", A[i]);
	}
}
