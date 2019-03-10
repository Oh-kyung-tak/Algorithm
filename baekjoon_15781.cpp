#include<iostream>
#include<set>
#include<algorithm>
#include<string>

using namespace std;

long long int h_max = -1;
long long int c_max = -1;

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);

	for (int i = 0; i < a; i++)
	{
		long long int n;
		scanf("%lld", &n);
		h_max = max(h_max, n);
	}

	for (int i = 0; i < b; i++)
	{
		long long int xx;
		scanf("%lld", &xx);
		c_max = max(c_max, xx);
	}

	printf("%lld", h_max + c_max);
}
