#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	while (1) 
	{
		int n, k;
		if (scanf("%d%d", &n, &k) == -1) break;

		int cnt = 0;

		for (int i = n; i <= k; i++)
		{
			int num[10] = { 0, };
			int temp = i;
			int check = 0;

			while (temp)
			{
				num[temp % 10]++;
				temp /= 10;
			}
			
			for (int j = 0; j < 10; j++)
			{
				if (num[j] > 1)
				{
					check = 1;
					break;
				}
			}

			if (check == 0)
				cnt++;
		}

		printf("%d\n", cnt);
	}
	return 0;
}
