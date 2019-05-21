#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>

using namespace std;

int T;

int gcd(int first, int second)
{
	if (first < second)
	{
		int temp = first;
		first = second;
		second = temp;
	}

	while (second != 0)
	{
		int rest = first % second;
		first = second;
		second = rest;
	}

	return first;
}
int main()
{
	scanf("%d", &T);

	while (T--)
	{
		int N;
		int arr[101];
		long long int sum = 0;
		memset(arr, 0, sizeof(arr));
		scanf("%d", &N);

		for (int i = 0; i < N; i++)
			scanf("%d", &arr[i]);

		for (int i = 0; i < N - 1; i++)
		{
			int first = arr[i];
			for (int j = i + 1; j < N; j++)
			{
				int second = arr[j];
				sum += gcd(first, second);
			}
		}

		printf("%lld\n", sum);
	}
}