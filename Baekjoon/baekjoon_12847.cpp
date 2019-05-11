#include <stdio.h>
#include <algorithm>

using namespace std;

long long int sum_salary[100001];

int main()
{
	long long int n, m;
	long long int sum = 0;
	long long int max_salary = -1;
	scanf("%lld %lld", &n, &m);

	for (int i = 1; i <= n; i++)
	{
		long long int num;
		scanf("%lld", &num);
		sum += num;
		sum_salary[i] = sum;
	}

	for (int i = m; i <= n; i++)
		max_salary = max(max_salary, sum_salary[i] - sum_salary[i - m]);

	printf("%lld", max_salary);
}
