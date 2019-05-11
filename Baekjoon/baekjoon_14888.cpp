#include <iostream>
#include <queue>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;
vector<int> v;

int num[10];

int main(void)
{
	int N;
	int min_num = 9999999999;
	int max_num = -99999999999;

	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
		scanf("%d", &num[i]);

	for (int i = 0; i <= 3; i++)
	{
		int num;
		scanf("%d", &num);
		while (num--)
			v.push_back(i);
	}

	do
	{
		int sum = num[1];

		for (int i = 2; i <= N; i++)
		{
			if (v[i - 2] == 0)
				sum += num[i];
			else if (v[i - 2] == 1)
				sum -= num[i];
			else if (v[i - 2] == 2)
				sum *= num[i];
			else if (v[i - 2] == 3)
				sum /= num[i];
		}

		min_num = min(min_num, sum);
		max_num = max(max_num, sum);
		
	} while (next_permutation(v.begin(), v.end()));

	printf("%d\n%d", max_num, min_num);
}
