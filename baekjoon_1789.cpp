#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>

using namespace std;
// 1789번
int main()
{
	long long int num, sum = 0;
	int cnt = 0;
	scanf("%lld", &num);

	for (int i = 1; i <= num; i++)
	{
		sum += i;
		if (num < sum)
			break;
		cnt++;
	}

	printf("%d", cnt);
}
