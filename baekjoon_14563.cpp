#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int T;

int main()
{
	scanf("%d", &T);

	while (T--)
	{
		int num;
		int sum = 0;
		scanf("%d", &num);

		for (int i = 1; i < num; i++)
		{
			if (num % i == 0)
				sum += i;

			if (sum > num)
			{
				printf("Abundant\n");
				break;
			}
		}

		if (sum == num)
			printf("Perfect\n");

		if (sum < num)
			printf("Deficient\n");
		
	}
}
	

	
