#include<iostream>
#include<set>
#include<algorithm>
#include<cstring>
#include<vector>

using namespace std;

int T;

int main() 
{
	scanf("%d", &T);

	while (T--)
	{
		int max_num;
		int num[1001];
		int solve[1001];

		int n;

		scanf("%d", &n);
		
		for (int i = 0; i < n; i++)
			scanf("%d", &num[i]);

		solve[0] = num[0];
		max_num = solve[0];

		for (int i = 1; i < n; i++)
		{
			solve[i] = max(num[i], solve[i-1] + num[i]);
			max_num = max(max_num, solve[i]);
		}

		printf("%d\n", max_num);
	}
}
