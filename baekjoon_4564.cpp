#include<iostream>
#include<queue>
#include<vector>
#include<string.h>
#include<algorithm>

using namespace std;

int main() 
{
	while (1)
	{
		int num;

		scanf("%d", &num);

		if (num == 0)
			break;
		
		if (num >= 10)
		{
			printf("%d ", num);
			while (1)
			{
				int mul = 1;

				while (num)
				{
					mul *= num % 10;
					num /= 10;
				}

				printf("%d ", mul);
				num = mul;

				if (mul < 10)
					break;
			}
		}
		else
			printf("%d", num);

		printf("\n");
	}
}
