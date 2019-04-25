#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<string>
#include<vector>

using namespace std;

int D, K;
int first, second;
int main()
{
	cin >> D >> K;
	
	for (int i = 1; i <= 50000; i++)
	{
		for (int j = i; j <= 50000; j++)
		{
			int sum = 0;
			int day = 3;

			first = i;
			second = j;
			sum += first + second;

			while (1)
			{
				if (day == D)
					break;

				first = second;
				second = sum;
				sum += first;
				day++;
			}

			if (sum == K)
			{
				printf("%d\n%d", i, j);
				return 0;
			}
		}
	}
}
